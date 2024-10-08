cmake_minimum_required(VERSION 3.28)
project(Part1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "E:/Qt/6.7.2/mingw_64")

find_package(Qt6 COMPONENTS
        Core
        REQUIRED)

add_subdirectory(1-1)
add_subdirectory(1-3)
add_subdirectory(1-8)
add_subdirectory(1-9)
add_subdirectory(1-10)
add_subdirectory(1-11)
add_subdirectory(1-14)

add_executable(Part1 main.cpp
        main.cpp
)
target_link_libraries(Part1
        Qt::Core
)
include_directories(.)
