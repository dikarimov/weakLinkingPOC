cmake_minimum_required(VERSION 3.10)

project(weakLinking)

add_executable(main_default main_default.cpp lib.cpp)

add_executable(main_overrided main_overrided.cpp lib.cpp)
