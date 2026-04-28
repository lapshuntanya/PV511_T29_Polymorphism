cmake_minimum_required(VERSION 4.2)
project(PV511_T29_Polymorphism)

set(CMAKE_CXX_STANDARD 20)

add_executable(PV511_T29_Polymorphism main.cpp
        Employee.cpp
        Employee.h
        Manager.cpp
        Manager.h
        Teacher.cpp
        Teacher.h)
