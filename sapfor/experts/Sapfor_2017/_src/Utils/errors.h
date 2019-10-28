#pragma once
#include <string>

enum typeMessage { WARR, ERROR, NOTE };
extern std::pair<std::string, int> currProcessing; // file and line, default ["", -1]

// GROUP:
// 10xx - analysis
// 20xx - transform
// 30xx - parallel

// 10xx ANALISYS GROUP
//   01 "bad directive position, it can be placed only"
//   02 "variable '%s' is not used in loop"
//   03 "variable '%s' is not changed in loop"
//   04 "dimention of array '%s' is %d, but must be 1"
//   05 "type of array '%s' but must be INTEGER"
//   06 "type of variable '%s' must be array"
//   07 "array size can't be computed"
//   08 "size of array '%s' is %d, but you enter %d"
//   09 "array '%s' is private"
//   10 "only positive numbers are supported"
//   11 "no such expression '%s' on loop"
//   12 "More information is required about sizes of array '%s'"
//   13 "Function '%s' needs to be inlined ..."
//   14 "Found recursive chain calls: %s, this function will be ignored"
//   15 "This function is not called in current project"
//   16 "Can not calculate count of iterations for this loop, information about iterations in all loops in parallel regions '%s' will be ignored"
//   17 "Can not find declaration for symbol '%s' in current scope"
//   18 "This loop does not have END DO format"
//   19 "Include '%s' has executable operators"
//   20 "Active DVM directives are not supported yet"
//   21 "array ref '%s' has more than one loop's variables"
//   22 "array ref '%s' has indirect access"
//   23 "can not calculate index expression for array ref '%s'"
//   24 "coefficient A in A*x+B is not positive for array ref '%s', inverse distribution in not supported yet"
//   25 "can not map write to array '%s' to this loop"
//   26 "write to non distributed array '%s' in this loop"
//   27 --- FREE
//   28 "Module with name '%s' must be placed in current file"
//   29 lowlevel warnings from private analyzer
//   30 lowlevel notes from private analyzer
//   31 "wrong parallel region identifier: variable '%s' was declarated on line %d"
//   32 "wrong parallel region identifier: variable '%s' was declarated in common block '%s'"
//   33 "parallel region '%s' is included in file '%s'"
//   34 "parallel regions '%s' and '%s' are crossed"
//   35 "parallel region '%s' has data statement(s)"
//   36 "Can not build align graph from user's DVM directives in this region"
//   37 "Array can not be distributed because of DVM's I/O constraints"
//   38 "An equivalence operator at line %d is not supported yet"
//   39 "Variabled '%s' and '%s' in one storage association (common block '%s') have different types" 
//   40 "First %d dimensions of array '%s' were deprecated to distributon due to function call '%s'"
//   41 "parallel region '%s' has line included in another region"
//   42 "distributed array in common block %s must have declaration in main unit"
//   43 "bad directive expression"
//   44 "Only pure procedures were supported"
//   45 "function's argument '%s' does not have declaration statement"
//   46 "mismatch of count formal and actual parameters "
//   47 "inconsistent array use"
//   48 "the same function name in different places was found"
//   49 "reasons of non pure function" 
//   50 "count of PROGRAM unit"
//   51 "Detected mpi call, turn on special regime of paralyzing"
//   52 "error in user DVM intervals"
//   53 "variable in shrink clause must be arrayy in file '%s' on line %d"
//   54 "length of mask for array '%s' must be %d, but you enter only %d dimenions in file '%s' on line %d"
//   55 "wrong mask value in %d position: it can be only 0 or 1 in file '%s' on line %d"
//   56 "array '%s' in shrink clause must be also declared in private clause in file '%s' on line %d"

// 20xx TRANSFORM GROUP
//   01 "can not convert array assign to loop"
//   02 "converted arithmetic IF to simple IF"
//   03 "can not convert to END DO loop"
//   04 "convert to END DO loop"
//   05 "loops on lines %d and %d were combined"
//   06 "substitute statement function with name '%s'"
//   07 "Internal error during unparsing process has occurred"
//   08 "Can not do PRIVATE EXPANSION for this loop - privates not found"
//   09 "Can not split this loop because of dependecy: %s"
//   10 "This loop has indirect child loops  and can not be splitted\n"

// 30xx PARALLEL GROUP
//   01 "add across dependencies by array '%s' to loop"
//   02 "add private scalar '%s' to loop on line %d"
//   03 "add reduction scalar '%s' with operation '%s' to loop on line %d"
//   04 "unknown type of reduction scalar '%s'"
//   05 "unknown scalar dependencies by '%s' (try to specify its type)"
//   06 "... prevents parallelization"
//   07 "Can not create distributed link for array '%s': dim size of this array is '%d' and it is not equal '%d'"
//   08 "internal error in analysis, parallel directives will not be generated for this file!"
//   09 "Added remote access for array ref '%s' can significantly reduce performance"
//   10 "Can not find arrays for distribution for parallel region '%s', ignored"
//   11 "Arrays have different align rules in this loop according to their write accesses"
//   12 "parallel regions %shave common function '%s' which is used inside them"
//   13 "parallel regions %shave local array '%s' which is used inside them"
//   14 "parallel region '%s' has common array '%s' which is used inside and outside region"
//   15 "parallel region '%s' does not have DVM interval for fragment"
//   16 "expected only assign operands in DVM interval"
//   17 "parallel region '%s' does not have copying of array '%s' in DVM interval"
//   18 "parallel region '%s' does not have copying of common array '%s' in DVM interval"
//   19 "Can not find execution time for this loop, try to get times statistic"
//   20 "detected distributed and non distributed array links by function's calls for array %s\n"
//   21 "empty parallel regions is forbidden"

// 40xx LOW LEVEL WARNINGS
//   01 
//   02 Wrong pure declaration - INTENT mismatch

extern int langOfMessages;
struct Messages
{
private:
    //explicit Messages(const typeMessage type, const int line, const std::string &value_) : Messages(type, line, value_, 0) { }
    explicit Messages(const typeMessage type, const int line, const std::wstring &value_, const int group) : type(type), line(line), group(group)
    {
        value = value_;
        //check for \n at the end
        if (value[value.size() - 1] == '\n')
            value.erase(value.begin() + value.size() - 1);
        //check for '.' at the end
        if (value[value.size() - 1] != '.')
            value += '.';
        //check for capital letter
#ifdef _WIN32
        const wchar_t fS = value[0];
        if (fS >= L'a' && fS <= L'z')
            value[0] = L'A' + (value[0] - L'a');
        if (fS >= L'�' && fS <= L'�')
            value[0] = L'�' + (value[0] - L'�');
#endif
        //TODO: convert to upper case for test between '___'
    }
public:
    explicit Messages(const typeMessage type, const int line, const std::wstring &rus, const std::wstring &eng, const int group) : 
        Messages(type, line, (langOfMessages == 1) ? rus : eng, group) { }

    std::wstring toString()
    {
        std::wstring retVal = L"|";
        retVal += std::to_wstring((int)type) + L" ";
        retVal += std::to_wstring(line) + L" ";
        retVal += std::to_wstring(group);
        retVal += L"|" + value;
        return retVal; 
    }

public:
    typeMessage type;
    int group;
    int line;
    std::wstring value;
};

// from Utils.cpp
#ifdef _WIN32
extern void printStackTrace();
#else
static void printStackTrace() { };
#endif

#if __SPC
#define printInternalError(file, line) do {\
    char buf[512];\
    sprintf(buf, "Internal error at line %d and file %s\n", line, file);\
    addToGlobalBufferAndPrint(buf);\
    throw(-1);\
} while (0)
#else
#define printInternalError(file, line) do {\
    printStackTrace(); \
    char buf[512];\
    sprintf(buf, "Internal error at line %d and file %s\n", line, file);\
    addToGlobalBufferAndPrint(buf);\
\
    if (currProcessing.first != "" && currProcessing.second != -1)\
    { \
       sprintf(buf, "Internal error in user code at line %d and file %s\n", currProcessing.second, currProcessing.first.c_str());\
       addToGlobalBufferAndPrint(buf);\
    } \
    throw(-1);\
} while (0)
#endif

#define checkNull(address, file, line) do { \
    if ((address) == NULL) \
        printInternalError(file, line); \
} while (0)

//TODO: count of string len of all parameters
#define allocAndPrint(buf, format, ...) do { \
   const int bufLen = 32 * 1024 * 1024;\
   buf = new char[bufLen];\
   const int countW = sprintf(buf, format, ##__VA_ARGS__);\
   if (countW + 1 > bufLen) \
   { \
        delete []buf; \
        printInternalError(__FILE__, __LINE__);\
   } \
} while (0)

#ifdef _WIN32
#define allocAndPrintLong(buf, format, ...) do { \
   const int bufLen = 32 * 1024 * 1024;\
   buf = new wchar_t[bufLen];\
   const int countW = swprintf(buf, format, ##__VA_ARGS__);\
   if (countW + 1 > bufLen) \
   { \
        delete []buf; \
        printInternalError(__FILE__, __LINE__);\
   } \
} while (0)
#else
#define allocAndPrintLong(buf, format, ...) do { \
   const int bufLen = 32 * 1024 * 1024;\
   buf = new wchar_t[bufLen];\
   const int countW = swprintf(buf, bufLen, format, ##__VA_ARGS__);\
   if (countW + 1 > bufLen) \
   { \
        delete []buf; \
        printInternalError(__FILE__, __LINE__);\
   } \
} while (0)
#endif

#define __spf_printToBuf(outval, format, ...) do {\
    char *buf = NULL; \
    allocAndPrint(buf, format, ##__VA_ARGS__); \
    outval = std::string(buf);\
    delete []buf;\
} while (0)

#define __spf_printToLongBuf(outval, format, ...) do {\
    wchar_t *buf = NULL; \
    allocAndPrintLong(buf, format, ##__VA_ARGS__); \
    outval = std::wstring(buf);\
    delete []buf;\
} while (0)

#define __spf_print(needPrint, format, ...) do {\
    if (needPrint == 1) {\
        char *buf = NULL; \
        allocAndPrint(buf, format, ##__VA_ARGS__); \
        addToGlobalBufferAndPrint(buf);\
        delete []buf;\
    } \
} while (0)

//russian messages
#ifdef _WIN32
//1001
static const wchar_t *R1 = L"�������� ������������ ���������: ����� ����������� ������ %ls %ls %ls";
static const wchar_t *R2 = L"�������� ���������: ������� ����� ���������� �����";
static const wchar_t *R3 = L"�������� ���������: �������� ������ ���� a * i + b";
static const wchar_t *R4 = L"�������� ������������ ���������: ��� ������� '%s' ��������� 'SPF END PARALLEL_REG_DIR', � ���� �������� 'SPF PARALLEL_REG_DIR'";
static const wchar_t *R5 = L"�������� ������������ ���������: ��� ������� '%s' ��������� 'SPF END PARALLEL_REG_DIR'";
static const wchar_t *R6 = L"�������� ������������ ���������: ��� ������� '%s' ��������� 'SPF END PARALLEL_REG_DIR'";
static const wchar_t *R7 = L"�������� ������������ ���������: ��������� 'SPF PARALLEL_REG_DIR', � ���� �������� 'SPF END PARALLEL_REG_DIR'";
static const wchar_t *R8 = L"�������� ������������ ���������: ��������� 'SPF PARALLEL_REG_DIR' � ��� �� ������� ���������";
static const wchar_t *R9 = L"�������� ������������ ���������: ��������� 'SPF PARALLEL_REG_DIR'";
static const wchar_t *R10 = L"�� ���������� ����������� ������� �����������������: ���� ��������� ������ �� �������� '%s', ��������� ���������� ENTRY";
static const wchar_t *R11 = L"�� ���������� ����������� ������� �����������������: ���� ��������� ������ �� �������� '%s', ��������� ���������� GOTO";
static const wchar_t *R12 = L"������������ ������������ �����: ����� �������� ������ ������ � ����������� ����� ����";
static const wchar_t *R13 = L"������������ ������������ �����: ������ �� ����� ���� ������ �����";
static const wchar_t *R14 = L"������������ ������������ �����: ������ � ����� ��� ���������� �� ����� ������ � ������ ��������";
static const wchar_t *R15 = L"������������ ��������� ������: ������ � ����� �� ����� ���� � ������� ����������";
static const wchar_t *R16 = L"������������ ��������� �����: ������ � ����� �� ����� ���� � ������ ��������";
static const wchar_t *R17 = L"������������ ������������ �����: ���������� �������� ��� ���������� �� ������ �������� ��������� ������ ��������";
static const wchar_t *R18 = L"������������ ������������ �����: ������ � ����� ������ ���� � ����� ������� ���������";
static const wchar_t *R19 = L"������������ ������������ ����� %d-%d: ������ ���������� ��������� � ������ �������� ���������";
static const wchar_t *R20 = L"������������ ������������ �����: ������ � ����� ������ ���� � ����� ������� ���������";
//1002
static const wchar_t *R21 = L"���������� '%s' �� ������������ � �����";
static const wchar_t *R22 = L"���������� '%s' �� ������������ � �����";
//1003
static const wchar_t *R23 = L"���������� '%s' �� ���������� � �����";
static const wchar_t *R24 = L"���������� '%s' �� ���������� � �����";
//1004
static const wchar_t *R25 = L"����������� ������� '%s' %d, � ������ ���� 1";
//1005
static const wchar_t *R26 = L"��� ������� '%s' ������ ���� INTEGER";
//1006
static const wchar_t *R27 = L"����� ���������� '%s' ������ ���� ������";
static const wchar_t *R28 = L"���������� '%s' �� �������� ��������";
static const wchar_t *R29 = L"���������� '%s' �� �������� ��������";
//1007
static const wchar_t *R30 = L"������ ������� �� ����� ���� ��������";
//1008
static const wchar_t *R31 = L"������ ������� '%s' %d, � �� ������� %d";
static const wchar_t *R32 = L"����������� ������� '%s' %d, � �� ������� %d";
//1009
static const wchar_t *R33 = L"������ '%s' �������� ���������";
static const wchar_t *R34 = L"������ '%s' �������� ���������";
//1010
static const wchar_t *R35 = L"��������� ������ ������������� �����";
//1011
static const wchar_t *R36 = L"��� ������ ��������� '%s' � �����";
//1012
static const wchar_t *R37 = L"���������� ���������� ������� ������� '%s'";
static const wchar_t* R149 = L"���������� ���������� ������� ����� '%s'";
//1013
static const wchar_t *R38 = L"���������� ���������� ���������� � ����������� ���������� ��� ������� '%s'"; //��������� ��������� ����������� ������� '%s', ��� ��� 
static const wchar_t *R39 = L"���������� ��� ������������ (%s : %s) � ����������� (%s : %s) %d-�� ��������� ��� ������� '%s'"; //��������� ��������� ����������� ������� '%s', ��� ��� 
static const wchar_t *R40 = L"��������� ��������� ����������� ������� '%s', ��� ��� ����� ���������� ������� ������ �������";
static const wchar_t *R41 = L"��������� ��������� ����������� ������� '%s' ��-�� ��������� � ������������ ������� '%s' � ����� �� ������ %d %s";
static const wchar_t *R42 = L"��������� ��������� ����������� ������� '%s' ��-�� ��������� � ������������ ������� '%s' %s";
static const wchar_t *R43 = L"��������� ���������� ������� '%s' ��-�� ������ ����������� ������� %s', ������������� � �������� ���������: ����������� ����������� ��������� = %d � ������������ ��������� = %d";
static const wchar_t *R44 = L"���������� �������������� ����� � ������� '%s' � ���������� � ����������� ��������� ��� ������� '%s'\n";
static const wchar_t *R45 = L"���������� ���������� ������� '%s', ��� ��� ����� �������� %d ���������� ������������ ���������� ����� �� ������ %d � ��� ������������ � ��������� ��������� � ��������� � ������� � ���� ���� �������";
//1014
static const wchar_t *R46 = L"���� ������� ����������� ������� �������: %s, ������ ������� ��������� �� ������������";
//1015
static const wchar_t *R47 = L"������ ������� �� ���������� � ������ �������";
//1016
static const wchar_t *R48 = L"���������� ��������� ���������� �������� ������� �����, ���������� � ���������� �������� ��� ���� ��������� ������ � ������� ����������������� '%s' ����� ���������������";
//1017
static const wchar_t *R49 = L"���������� ����� ����������� ��� ������� '%s' � ������ ������� ���������";
//1018
static const wchar_t *R50 = L"������ ���� �� � END DO �������";
static const wchar_t *R51 = L"������ ���� �� � END DO �������";
//1019
static const wchar_t *R52 = L"���������� ���� '%s' �������� ����������� ���������, ��� ��������� � ����������������� � ������� SAPFOR";
//1020
static const wchar_t *R53 = L"�������� DVM-��������� �� �������������� (���������� �������� ����� <<��������� DVM-���������>>)";
//1021
static const wchar_t *R54 = L"��������� � ������� '%s' �������� ����� ����� ��������� ���������� ������";
static const wchar_t *R55 = L"��������� � ������� '%s' �� �������� ������������ ���������� ������";
//1022
static const wchar_t *R56 = L"��������� � ������� '%s' ����� ��������� ���������";
//1023
static const wchar_t *R57 = L"���������� ��������� ��������� ��������� � ��������� � ������� '%s'";
//1024
static const wchar_t *R58 = L"����������� A � �������� ��������� A*x+B � ������� '%s' �� ����� ���� �������������, ��� ��� ��������� ������������� �� ��������������";
//1025
static const wchar_t *R59 = L"���������� ����������� ��������� � ������� �� ������ '%s' � ������� ������";
//1026
static const wchar_t *R60 = L"��������� �������� ������ � ���������������� ������ '%s', ��������� � ������ ������";
static const wchar_t *R61 = L"��������� �������� ������ � ���������������� ������ '%s', ��������� � ������ ������";
//1027
//--- FREE
//1028
static const wchar_t *R62 = L"�������� ������ '%s' ������ ���������� � ������ �����";
//1029
//--- TODO
//1030
//--- TODO
//1031
static const wchar_t *R63 = L"�������� ��� �������: ��� '%s' ��� ��������� �� ������ %d";
//1032
static const wchar_t *R64 = L"�������� ��� �������: ��� '%s' ��� ��������� � common-����� '%s'";
//1033
static const wchar_t *R65 = L"������� ����������������� '%s' �������� ���� ���� � ����� '%s'";
//1034
static const wchar_t *R66 = L"�������� ������������ �������: �� ���������� common-����� � ����� %s �� ���������� ���������:%s";
//1035
//--- TODO
//1036
static const wchar_t *R67 = L"���������� ��������� ������ ������������ � ������ ������� �����������������, ��������� ���������������� DVM-���������";
//1037
static const wchar_t *R68 = L"������ '%s' �� ����� ���� ����������� ��-�� ����������� �����/������, ������������� DVM ��������";
//1038
static const wchar_t *R69 = L"�������� PAUSE �������� ����������� � ������������ ���������";
static const wchar_t *R70 = L"�������� EQUIVALENCE �� �������������� �� ������ ������";
//1039
static const wchar_t *R71 = L"���������� '%s' � '%s' ��������� � ����� ������� ���������� (common block '%s'), �� ����� ������ ���� (����� - %s:%d � %s:%d)";
//1040
static const wchar_t *R72 = L"������ %d ��������� ������� '%s' ��������� � ������������� ��-�� �������� � ������� '%s'";
static const wchar_t *R73 = L"������ ��������� ������� '%s' ��������� � ������������� ��-�� �������� � ������� '%s'";
//1041
static const wchar_t *R74 = L"������� ����������������� '%s'�������� ������, ������� �������� � ������ �������";
//1042
static const wchar_t *R75 = L"�������������� ������ '%s' ��������� � common ����� '%s' ������ ����� �������� � ������� ����������� �������";
//1043
static const wchar_t *R76 = L"�������� ��������� � ���������: ��������� ������ ����������";
static const wchar_t *R77 = L"�������� ��������� � ���������: ��������� %d �����-��������� ������ �� ������ %d, �� �� ����� %d";
static const wchar_t *R78 = L"�������� ��������� � ���������: ��������� ���������� '%s' �� ������� %d";
//1044
static const wchar_t *R79 = L"�������������� ������� ������ ��� �������� ��������";
static const wchar_t *R80 = L"�������������� ������� ������ ��� �������� ��������";
//1045
static const wchar_t *R81 = L"�������� '%s' ������� '%s' �� ����� ��������� ��������";
//1046
static const wchar_t *R82 = L"���������� ���������� � ����������� ���������� �� ��������� ��� ������ ������ ������� '%s'";
static const wchar_t *R83 = L"���������� ���������� � ����������� ���������� �� ��������� ��� ������ ������ ������� '%s'";
static const wchar_t *R84 = L"���������� ���������� � ����������� ���������� �� ��������� ��� ������ ������ ������� '%s'";
//1047
static const wchar_t *R85 = L"%d ��������� ������� '%s' �� ����� ���� ������������ ��-�� ��������� ����������� �� ����� � ��������� ������������";
static const wchar_t *R86 = L"������ '%s' �� ����� ���� �����������, ��� ��� ��� ��� ��������� ��������� � �������������";
static const wchar_t *R87 = L"������ '%s' �� ����� ���� �����������";
static const wchar_t *R88 = L"������ '%s' �� ����� ���� �����������";
static const wchar_t *R89 = L"������ '%s' �� ����� ���� �����������";
static const wchar_t *R90 = L"������ '%s' �� ����� ���� ����������� ��-�� ������������� RESHAPE";
static const wchar_t *R91 = L"������ '%s' �� ����� ���� �����������";
//1048
static const wchar_t *R92 = L"������� '%s' � ���������� ������ ���� ��������� � �����, ��� ����� �����: � ����� '%s':%d � '%s':%d";
//1049
static const wchar_t *R93 = L"������� �� �������� ������ (��� �������� ��������) ��-�� ������� ������� ���������";
//1050
static const wchar_t *R146 = L"������� �����, ��� ���� ������� ����������� ������� (PROGRAM)";
static const wchar_t *R147 = L"�� ������� �� ���� ������� ����������� ������� (PROGRAM)";
//1051
static const wchar_t *R148 = L"���������� ������ MPI-�������, ������� ����� ����������� ����� ����������������� MPI-��������";
//1052
static const wchar_t *R150 = L"������ � ����������� ���������������� ���������� - �� ������� ����� ����� ���������";
//1053
static const wchar_t *R154 = L"������ � ��������� SHRINK ������: ���������� ������ ���� �������� � ����� '%s'";
//1054
static const wchar_t *R155 = L"����� ����� ��� ������� '%s' ������ ���� ����� %d, �� ������� ������ %d ��������� � ����� '%s'";
//1055
static const wchar_t *R156 = L"������ � ��������� ����� �� %d ������� ������� '%s': � �������� �������� ����� ���� ������ 0 � 1 � ����� '%s'";
//1056
static const wchar_t *R157 = L"������ '%s' � ��������� shrink ����� ������ ���� �������� � ��������� private � ����� '%s'";

//2001
static const wchar_t *R94 = L"���������� ������������� ������������� ������ ������������ � �����";
static const wchar_t *R95 = L"���������� ������������� ������������� ������ ������������ � �����";
//2002
static const wchar_t *R96 = L"�������������� IF ��� ������������ � IF-ENDIF";
static const wchar_t *R97 = L"����������� GOTO ��� ������������ � IF-ENDIF";
//2003
static const wchar_t *R98 = L"���������� ������������� ������������� ���� � END DO ������";
//2004
static const wchar_t *R99 = L"���� ��� ������������ � END DO ������";
//2005
static const wchar_t *R100 = L"����� �� ������� %d � %d ���� ����������";
//2006
static const wchar_t *R101 = L"���� ��������� ����������� ������� � ������ '%s'";
//2007
static const wchar_t *R102 = L"�������� �������������� �������� �� ����� ��������� ��������� ������";
static const wchar_t *R103 = L"�������� �������������� �������� �� ����� ��������� ��������� ������";
//2008
// -- TODO 
//2009
static const wchar_t *R104 = L"���������� ��������� ������ ���� ��-�� ��������� �����������: %s";
//2010
static const wchar_t *R105 = L"������ ���� �������� ��������� ��������, ������� �� ����� ���� ��������";
static const wchar_t *R106 = L"� ������� ����� ���� ����������� �� ����������������� (� ������ ";
static const wchar_t *R107 = L"� ������� ����� ���� �����������, ������� ������ ����������������, ������� �� �� ����� ���� �������� (� ������ ";

//3001
static const wchar_t *R108 = L"��������� across-����������� � ������� '%s' � �����";
//3002
static const wchar_t *R109 = L"��������� ��������� ���������� '%s' � ����� �� ������ %d";
//3003
static const wchar_t *R110 = L"��������� ������������ ���������� '%s' � ����� �������� '%s' � ����� �� ������ %d";
//3004
static const wchar_t *R111 = L"����������� ��� ������������ �������� �� ������� '%s'";
//3005
static const wchar_t *R112 = L"����������� ����������� �� ��������� ���������� '%s' (���������� ������� ��������������� �� ���)";
//3006
static const wchar_t *R113 = L"����������� ����������� �� ������� ������������ ����������������� ������� �����";
static const wchar_t *R114 = L"����������� ����������� �� ������� ������������ ����������������� ������� �����";
static const wchar_t *R115 = L"������� ��� ���������� ��������� �������� (GOTO) ������������ ����������������� ������� �����";
static const wchar_t *R116 = L"��������� �����/������ ������������ ����������������� ������� �����";
static const wchar_t *R117 = L"��������� STOP ������������ ����������������� ������� �����";
static const wchar_t *R118 = L"���������� ����������� ������������, ������� ������������ ����������������� ������� �����";
static const wchar_t *R119 = L"������������� ����������� ��������� � ������� �� ������ ������������ ����������������� ������� �����";
static const wchar_t *R120 = L"��������� ��������� �� ��������������� ������� ������������ ����������������� ������� �����";
static const wchar_t *R121 = L"��������� � ����������������� ������� �� ������ ������������ ����������������� ������� �����";
static const wchar_t *R122 = L"������� ��������� ������� ������������ ��������, ������������ �� ������ � ������ �����, ������������ �����������������";
static const wchar_t *R123 = L"��������� � �������� ��������� ������������ ����������������� ������� �����";
static const wchar_t *R144 = L"���������� �� ������������� ������������ ��������, ��� ������������ ����������������� ������� �����";
static const wchar_t *R145 = L"���������� DVM ��������� ������ �����, ��� ������������ ����������������� ������� �����";
//--TODO R124 R125 ��� �������������� ����� ����������� 
//3007
static const wchar_t *R126 = L"���������� ������� � �������� ��� ������� '%s': ����������� ������� '%d' � ��� �� ����� '%d'";
static const wchar_t *R127 = L"���������� ����������� ������������ ��������, ������������ � ���������";
//3008
static const wchar_t *R128 = L"���������� ������ �������, ����������������� �� ����� ��������� ��� ������� �����!";
//3009
static const wchar_t *R129 = L"����������� REMOTE_ACCESS ��� ��������� � ������� '%s' ����� �������� � �������� ����������";
//3010
static const wchar_t *R130 = L"�� ���������� ������� ��� ��������� ����� ��� ������������� � ������ �������";
static const wchar_t *R131 = L"�� ���������� ������� ��� ��������� ����� ��� ������������� � ������ ������� �����������������";
//3011
static const wchar_t *R132 = L"� �������� '%s' � '%s' ������ ������� ������������ �������� ��������� �� ������ � � ������ �����";
//3012
static const wchar_t *R133 = L"������� ����������������� %s����� ����� ������������ ������� '%s'";
//3013
static const wchar_t *R134 = L"������� ����������������� %s����� ����� ������������ ��������� ������ '%s'";
static const wchar_t *R152 = L"������� ����������������� %s����� ����� ������������ ������ �� ������ '%s'";
//3014
static const wchar_t *R135 = L"������� ����������������� '%s' �������� common-������ '%s', ������������ � ������� � ��� �";
//3015
static const wchar_t *R136 = L"������� ����������������� '%s' �� ����� DVM-��������� ��� ���������";
//3016
static const wchar_t *R137 = L"���������� ������� DVM-���������� ��� ��������� ������";
//3017
static const wchar_t *R138 = L"������� ����������������� '%s' �� �������� ����������� ������� '%s' � DVM-���������";
//3018
static const wchar_t *R139 = L"������� ����������������� '%s' �� �������� ����������� ������� '%s' � DVM-���������";
//3019
//--- TODO ���������
//3020
static const wchar_t *R140 = L"��������� ������ '%s', ���������� ���������� �������, � ������� ���������� ��� ��������������, ��� � �� �������������� �������. ��������, ����� ��������� � ������������� ������������ �������, ���� �������������� ��������������� �������.\n";
static const wchar_t *R141 = L"��������� �������������� ������ '%s', ������������ � �������� ��������� � ���������\n";
static const wchar_t* R153 = L"��������� �� �������������� ������ '%s', ������������ � �������� ��������� � ���������\n";
static const wchar_t *R142 = L"��� ������� '%s' �� ������� ����� ������� �������������, ���������� ������ �������.\n";
//3021
static const wchar_t* R151 = L"������ ������� ����������������� �������������.\n";

//4001
//---TODO ������ �� SAGE
//4002
static const wchar_t *R143 = L"�������� ���������� PURE ������� - ����������� ��������� INTENT";

#endif