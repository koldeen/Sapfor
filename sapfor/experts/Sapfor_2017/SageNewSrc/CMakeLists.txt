cmake_minimum_required(VERSION 2.8)

set(project SageNewSrc)
#also named as libSage
if (TARGET ${project})
    return()
endif ()
project(${project})
message("processing ${project}")

# Read pathes to external sapfor directories
if (EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/../paths.txt")
    message("Found paths.txt, using custom paths.")
    FILE(STRINGS ../paths.txt SAPFOR_PATHS)
else ()
    message("Not found paths.txt, using default paths.")
    FILE(STRINGS ../paths.default.txt SAPFOR_PATHS)
endif ()
foreach (NameAndValue ${SAPFOR_PATHS})
    # Strip leading spaces
    string(REGEX REPLACE "^[ ]+" "" NameAndValue ${NameAndValue})
    # Find variable name
    string(REGEX MATCH "^[^=]+" Name ${NameAndValue})
    # Find the value
    string(REPLACE "${Name}=" "" Value ${NameAndValue})
    # Set the variable, note the ../ because we are deeper than the file
    set(${Name} "../${Value}")
endforeach ()

# if not default ${sage_sources} must be set in ../paths.txt
set(SOURCE_LIB
        ${sage_sources}/annotate.tab.c
        ${sage_sources}/comments.c
        ${sage_sources}/low_level.c
        ${sage_sources}/toolsann.c
        ${sage_sources}/unparse.c
        )

# if not default ${fdvm_include}, ${sage_include_1}, ${sage_include_2} must be set in ../paths.txt
include_directories(${fdvm_include} ${sage_include_1} ${sage_include_2})
add_library(SageNewSrc STATIC ${SOURCE_LIB})

add_subdirectory(../SageOldSrc ${CMAKE_CURRENT_BINARY_DIR}/SageOldSrc)
target_link_libraries(SageNewSrc SageOldSrc)

if (MSVC_IDE)
   set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /MP")
   set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} /MP")
else()
   set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
   set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")
endif()