cmake_minimum_required(VERSION 3.28)
project(1-14)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "E:/Qt/6.7.2/mingw_64")

find_package(Qt6 COMPONENTS
        Core
        REQUIRED)
include_directories(.)
add_executable(1-14 main.cpp)
target_link_libraries(1-14
        Qt::Core
)


