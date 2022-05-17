cmake_minimum_required(VERSION 3.22)
project(AnimalFun)

set(CMAKE_CXX_STANDARD 23)

add_executable(AnimalFun main.cpp Animal.cpp Animal.h Dog.cpp Dog.h Cat.cpp Cat.h)
