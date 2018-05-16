cmake_minimum_required(VERSION 3.10)
project(learnC__)

set(CMAKE_CXX_STANDARD 14)

add_executable(learnC__
        src/main.cpp
        src/AbstractHuman.cpp
        src/Human.cpp
        src/TeachingAssistant.cpp
        )