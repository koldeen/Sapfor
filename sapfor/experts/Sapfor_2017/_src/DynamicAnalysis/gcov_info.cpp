#include "../Utils/leak_detector.h"

#include <iostream>
#include <map>
#include <algorithm>

#include "../Utils/errors.h"

#include "gcov_info.h"

using std::map;
using std::make_pair;
using std::ostream;
using std::endl;

Gcov_info::Gcov_info() { numLine = -1; executedCount = -1; countCalls = 0; countBranches = 0; }
Gcov_info::Gcov_info(int a, int b) { numLine = a; executedCount = b; }

void Gcov_info::set(int a, int64_t b, int c, int d) { numLine = a; executedCount = b; countCalls = c; countBranches = d; }

int Gcov_info::getNumLine() const { return numLine; }
int64_t Gcov_info::getExecutedCount() const { return executedCount; }
void Gcov_info::setNumLine(int a) { numLine = a; }
void Gcov_info::setExecutedCount(int64_t a) { executedCount = a; }
void Gcov_info::setCall(Perform a) { countCalls++; calls.insert(make_pair(a.getNumber(), a)); }
void Gcov_info::setBranch(Perform a) { countBranches++; branches.insert(make_pair(a.getNumber(), a)); }
map<int, Perform> Gcov_info::getCalls() const { return calls; }
map<int, Perform> Gcov_info::getBranches() const { return branches; }
int Gcov_info::getCountCalls() const { return countCalls; }
int Gcov_info::getCountBranches() const { return countBranches; }
void Gcov_info::gcov_print() const { __spf_print(1, "%d - %lld\n", numLine, executedCount); }
ostream &operator<<(ostream &out, const Gcov_info &a) {
    out << "numLine= " << a.numLine << "\nexecutedCount= " << a.executedCount <<
        "\ncountCalls= " << a.countCalls << "\ncountBranches= " << a.countBranches << endl;
    return out;
}

//-------------------------Perform-----------------------------------------

Perform::Perform() { number = -1; percent = -1; }
Perform::Perform(int a, int b) { number = a; percent = b; }
void Perform::set(int a, int b) { number = a; percent = b; }
int Perform::getNumber() { return number; }
int Perform::getPercent() { return percent; }
void Perform::setNumber(int a) { number = a; }
void Perform::setPercent(int a) { percent = a; }
void Perform::gcov_print() { __spf_print(1, "%d - %d\n", number, percent); }
ostream &operator<<(ostream &out, const Perform &a) { out << "number= " << a.number << "\npercent= " << a.percent << endl; return out; } 