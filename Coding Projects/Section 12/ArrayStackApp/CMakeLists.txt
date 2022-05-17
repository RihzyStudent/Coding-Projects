cmake_minimum_required(VERSION 3.22)
project(ArrayStackApp)

set(CMAKE_CXX_STANDARD 14)

add_executable(ArrayStackApp main.cpp ../LinkedStackApp/Stack.h ArrayStack.h)
