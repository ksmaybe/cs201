cmake_minimum_required(VERSION 3.13)
project(cs201 C)

set(CMAKE_C_STANDARD 11)

add_executable(cs201 lab2.c)
target_link_libraries(cs201 m)