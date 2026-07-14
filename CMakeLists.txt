cmake_minimum_required(VERSION 3.16)
project(LearnCPP VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(FetchContent)
FetchContent_Declare(
    plog
    GIT_REPOSITORY https://github.com/SergiusTheBest/plog.git
    GIT_TAG 1.1.10
    GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(plog)

add_executable(main src/main.cpp)
target_link_libraries(main PRIVATE plog::plog)

# 多文件练习时自己加，例如 Ch2 quiz：
# add_executable(main src/main.cpp src/io.cpp)
# target_include_directories(main PRIVATE src)
