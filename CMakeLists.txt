cmake_minimum_required(VERSION 3.7)
project(myll)

include_directories(./)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES myll.h link.c exemples/2/main.c init.c link_right.c link_left.c unlink.c get_extreme_right.c get_extreme_left.c)

add_executable(myll ${SOURCE_FILES})