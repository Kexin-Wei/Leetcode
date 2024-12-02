cmake_minimum_required(VERSION 3.16)

project(LeetCode)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB CPP_FILES "*.cpp")

foreach(f ${CPP_FILES})
    get_filename_component(f_name ${f} NAME_WE)
    add_executable(${f_name} ${f})
endforeach()