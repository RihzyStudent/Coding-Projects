cmake_minimum_required(VERSION 3.22)
project(RPGProject)

set(CMAKE_CXX_STANDARD 23)

add_executable(RPGProject main.cpp Player.cpp Player.h Warrior.cpp Warrior.h Priest.cpp Priest.h Mage.cpp Mage.h)
