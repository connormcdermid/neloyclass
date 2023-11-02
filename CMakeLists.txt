cmake_minimum_required(VERSION 3.26)
project(ClassTemplate)
set(CMAKE_INSTALL_PREFIX "$ENV{HOME}")

set(CMAKE_CXX_STANDARD 17)

add_executable(neloy main.cpp)

install(TARGETS neloy DESTINATION bin)