#pragma once

#include "dvm.h"
#include <vector>
#include <map>
#include <string>

void SwapArrayDims(SgFile *file, const std::map<std::string, std::vector<int>> &arraysToSwap);
void setAllDeclsWithInitZero(SgFile* file);
void dumpAllDeclsWithInit(SgFile* file, bool create);