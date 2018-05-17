# add_subdirectory でビルド対象追加
cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_FLAGS "")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

add_executable(exeReferenceC reference.c)
add_executable(exeReferenceCpp reference.cpp)

add_executable(exeCastC cast.c)
add_executable(exeCastCpp cast.cpp)

add_executable(exeScope scope.cpp)
