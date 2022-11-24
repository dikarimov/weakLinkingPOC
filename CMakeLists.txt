cmake_minimum_required(VERSION 3.10)

project(weakLinking)

ADD_LIBRARY(lib_static STATIC lib.cpp)

add_executable(main_default_static main_default.cpp)
target_link_libraries(main_default_static lib_static)

add_executable(main_overrided_static main_overrided.cpp)
target_link_libraries(main_overrided_static lib_static)

ADD_LIBRARY(lib_shared SHARED lib.cpp)

add_executable(main_default_shared main_default.cpp)
target_link_libraries(main_default_shared lib_shared)

add_executable(main_overrided_shared main_overrided.cpp)
target_link_libraries(main_overrided_shared lib_shared)