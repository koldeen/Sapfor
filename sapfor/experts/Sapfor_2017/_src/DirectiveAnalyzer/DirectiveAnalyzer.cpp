#include "../Utils/leak_detector.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>

#include <string>
#include <fstream>
#include <iostream>

#include <vector>
#include <map>
#include <set>
#include <utility>
#include <assert.h>

#include "../Distribution/DvmhDirective.h"
#include "../GraphLoop/graph_loops.h"
#include "DirectiveAnalyzer.h"
#include "../Utils/utils.h"

using std::vector;
using std::map;

static void recUniteAcrossOut(LoopGraph *currLoop)
{
    if (currLoop->perfectLoop > 1)
    {
        recUniteAcrossOut(currLoop->children[0]);
        if (currLoop->directive)
            currLoop->acrossOutAttribute.insert(currLoop->children[0]->acrossOutAttribute.begin(), currLoop->children[0]->acrossOutAttribute.end());
    }
}

static void recUnite(vector<LoopGraph*> &loopGraph)
{
    for (int i = 0; i < loopGraph.size(); ++i)
    {
        LoopGraph &currLoop = *loopGraph[i];
        if (currLoop.perfectLoop > 1)
        {
            vector<ParallelDirective*> united;
            vector<ParallelDirective*> elems;

            LoopGraph *elem = loopGraph[i];
            for (int k = 0; k < currLoop.perfectLoop; ++k)
            {
                elems.push_back(elem->directive);
                if (k != currLoop.perfectLoop - 1)
                    elem = elem->children[0];
            }

            united.push_back(elems.back());
            for (int k = currLoop.perfectLoop - 2; k >= 0; --k)
            {
                ParallelDirective *first = elems[k];
                ParallelDirective *second = united.back();
                ParallelDirective *newDir = NULL;
                if (first != NULL && second != NULL)
                    newDir = *first + *second;
                else if (first != NULL)
                    newDir = new ParallelDirective(*first);
                else if (first == NULL && second != NULL)
                {
                    newDir = new ParallelDirective(*second);
                    newDir->parallel.insert(newDir->parallel.begin(), "*");
                }

                united.push_back(newDir);
            }

            elem = loopGraph[i];
            for (int k = 0; k < currLoop.perfectLoop - 1; ++k)
            {
                if (elem->directive)
                    delete elem->directive;

                elem->directive = united[currLoop.perfectLoop - k - 1];
                elem = elem->children[0];
            }
            recUniteAcrossOut(loopGraph[i]);
        }
        else
            recUnite(currLoop.children);
    }
}

void UniteNestedDirectives(vector<LoopGraph*> &loopGraph)
{
    recUnite(loopGraph);
}