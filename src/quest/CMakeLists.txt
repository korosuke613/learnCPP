# add_subdirectory でビルド対象追加
cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_FLAGS "")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(QUESTION "question")
set(ANSWER "answer")
set(MAINS "mains")

# 問題1
set(NUM 1)
add_executable(exeQ${NUM} ${MAINS}/mainQ${NUM}.cpp)
target_include_directories(exeQ${NUM} PRIVATE ${QUESTION}/)
add_executable(exeA${NUM} EXCLUDE_FROM_ALL ${MAINS}/mainQ${NUM}.cpp)
target_include_directories(exeA${NUM} PRIVATE ${ANSWER}/)

# 問題2
set(NUM 2)
add_executable(exeQ${NUM} ${MAINS}/mainQ${NUM}.cpp ${QUESTION}/Q${NUM}.cpp)
target_include_directories(exeQ${NUM} PRIVATE ${QUESTION}/)
add_executable(exeA${NUM} EXCLUDE_FROM_ALL ${MAINS}/mainQ${NUM}.cpp ${ANSWER}/Q${NUM}.cpp)
target_include_directories(exeA${NUM} PRIVATE ${ANSWER}/)

# 問題3
set(NUM 3)
add_executable(exeQ${NUM} ${MAINS}/mainQ${NUM}.cpp ${QUESTION}/Q${NUM}Parent.cpp ${QUESTION}/Q${NUM}Children.cpp)
target_include_directories(exeQ${NUM} PRIVATE ${QUESTION}/)
add_executable(exeA${NUM} EXCLUDE_FROM_ALL ${MAINS}/mainQ${NUM}.cpp ${ANSWER}/Q${NUM}Parent.cpp ${ANSWER}/Q${NUM}Children.cpp)
target_include_directories(exeA${NUM} PRIVATE ${ANSWER}/)



add_custom_target(ans
        DEPENDS exeA1
        DEPENDS exeA2
        DEPENDS exeA3
        )
