cmake_minimum_required(VERSION 3.28)
project(Part2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "E:/Qt/6.7.2/mingw_64")

find_package(Qt6 COMPONENTS
        Core
        REQUIRED)
add_subdirectory(2-4)
add_subdirectory(2-9)
add_subdirectory(2-16)
add_subdirectory(2-24)
add_executable(Part2 main.cpp
)
target_link_libraries(Part2
        Qt::Core
)
include_directories(.)
