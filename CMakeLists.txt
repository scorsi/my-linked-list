cmake_minimum_required(VERSION 3.7)
project(myll)

include_directories(./)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES myll.h link.c exemples/1/main.c init.c)

add_executable(myll ${SOURCE_FILES})