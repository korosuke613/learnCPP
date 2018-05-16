# add_subdirectory でビルド対象追加
cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_FLAGS "")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(QUESTION "question")
set(ANSWER "answer")

# 問題1
set(NUM 1)
add_executable(Q${NUM} mainQ${NUM}.cpp ${QUESTION}/Q${NUM}.h)
target_include_directories(Q${NUM} PRIVATE ${QUESTION}/)
add_executable(A${NUM} mainQ${NUM}.cpp ${ANSWER}/Q${NUM}.h)
target_include_directories(A${NUM} PRIVATE ${ANSWER}/)

# 問題2
set(NUM 2)
add_executable(Q${NUM} mainQ${NUM}.cpp ${QUESTION}/Q${NUM}.cpp ${QUESTION}/Q${NUM}.h)
target_include_directories(Q${NUM} PRIVATE ${QUESTION}/)
add_executable(A${NUM} mainQ${NUM}.cpp ${ANSWER}/Q${NUM}.cpp ${ANSWER}/Q${NUM}.h)
target_include_directories(A${NUM} PRIVATE ${ANSWER}/)
