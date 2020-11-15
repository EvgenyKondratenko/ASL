cmake_minimum_required(VERSION 3.17)
project(ASL)

set(CMAKE_CXX_STANDARD 14)

add_executable(ASL src/main.cpp src/Thing.h src/Atom.cpp src/Atom.h src/Attributon.cpp src/Attributon.h src/Thing.cpp src/Atoms/String.cpp src/Atoms/String.h src/Atoms/QName.cpp src/Atoms/QName.h src/Atoms/Boolean.cpp src/Atoms/Boolean.h src/Atoms/Integer.cpp src/Atoms/Integer.h src/Atoms/Double.cpp src/Atoms/Double.h src/Attributons/State.cpp src/Attributons/State.h src/Attributons/Multistate.cpp src/Attributons/Multistate.h src/Attributons/Function.cpp src/Attributons/Function.h)