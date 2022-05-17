cmake_minimum_required(VERSION 3.22)
project(ArrayQueueApp)

set(CMAKE_CXX_STANDARD 14)

add_executable(ArrayQueueApp main.cpp Queue.h ArrayQueue.h)
