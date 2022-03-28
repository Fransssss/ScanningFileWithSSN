cmake_minimum_required(VERSION 3.21)
project(ScanningFileSSN)

set(CMAKE_CXX_STANDARD 14)

add_executable(ScanningFileSSN main.cpp isValidLine.cpp isValidLine.h isValidSSN.cpp isValidSSN.h SSN_File.txt)
