cmake_minimum_required(VERSION 4.0)
project(network_messenger)

set(CMAKE_CXX_STANDARD 20)

add_executable(network_messenger src/client/main_client.cpp
        src/client/client.cpp
        src/client/client.h)
