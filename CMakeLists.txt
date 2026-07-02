cmake_minimum_required(VERSION 3.16)
project(LearnCPP VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(main src/main.cpp)

# 多文件练习时自己加，例如 Ch2 quiz：
# add_executable(main src/main.cpp src/io.cpp)
# target_include_directories(main PRIVATE src)
