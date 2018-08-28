cmake_minimum_required(VERSION 3.8)
project(linked_list_camilaferno)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        iterator.h
        list.h
        main.cpp
        node.h)

add_executable(linked_list_camilaferno ${SOURCE_FILES})