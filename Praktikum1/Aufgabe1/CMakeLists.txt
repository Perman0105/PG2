cmake_minimum_required(VERSION 3.5)

project(Aufgabe1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Aufgabe1 main.cpp)

install(TARGETS Aufgabe1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
