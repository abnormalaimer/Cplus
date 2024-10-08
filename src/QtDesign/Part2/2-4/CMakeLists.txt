cmake_minimum_required(VERSION 3.28)
project(2-4)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "E:/Qt/6.7.2/mingw_64")

find_package(Qt6 COMPONENTS
        Core
        REQUIRED)
include_directories(.)
add_executable(2-4 main.cpp
        fraction.cpp
        fraction.h)
target_link_libraries(2-4
        Qt::Core
)


