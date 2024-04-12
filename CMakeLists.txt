cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
PROJECT(FailPair LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

find_package(ROOT REQUIRED)

add_custom_command(OUTPUT G__DDDict.cxx
  COMMAND ${ROOT_rootcling_CMD}
  ARGS -f G__DDDict.cxx -s ${CMAKE_BINARY_DIR}/G__DDDict -inlineInputHeader  ${CMAKE_SOURCE_DIR}/Dict.cpp)

add_library(dictPlugin SHARED G__DDDict.cxx)
target_link_libraries(dictPlugin PUBLIC ROOT::Core)
