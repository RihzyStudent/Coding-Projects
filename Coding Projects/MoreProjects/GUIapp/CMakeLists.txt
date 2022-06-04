cmake_minimum_required(VERSION 3.10)
project(Qt-CMake-HelloWorld)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH "D:\\Learning to code in c++\\mingw64")

find_package(Qt5Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

add_executable(helloworld main.cpp mainwindow.cpp application.qrc)
target_link_libraries(helloworld Qt5::Widgets)