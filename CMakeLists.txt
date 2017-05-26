cmake_minimum_required(VERSION 3.7)
project(myll)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES myll.h main.c link.c)

add_executable(myll ${SOURCE_FILES})