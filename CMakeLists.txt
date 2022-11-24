cmake_minimum_required(VERSION 3.10)

project(weakLinking)

ADD_LIBRARY(lib STATIC lib.cpp)

add_executable(main_default main_default.cpp)
target_link_libraries(main_default lib)

add_executable(main_overrided main_overrided.cpp)
target_link_libraries(main_overrided lib)