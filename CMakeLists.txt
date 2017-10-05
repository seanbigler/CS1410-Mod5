cmake_minimum_required(VERSION 3.8)
project(Module5)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES Arrays.cpp)
#set(SOURCE_FILES MultiDArray.cpp)
#set(SOURCE_FILES FuncArray.cpp)
#set(SOURCE_FILES StructArray.cpp)
#set(SOURCE_FILES ArrayAsClassMember.cpp)
#set(SOURCE_FILES ArrayChar.cpp)
#set(SOURCE_FILES CopyString.cpp)
#set(SOURCE_FILES String1.cpp)
set(SOURCE_FILES InputOutputString.cpp)


add_executable(Module5 ${SOURCE_FILES})