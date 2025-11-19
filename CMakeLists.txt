cmake_minimum_required(VERSION 4.0)
project(network_messenger)

set(CMAKE_CXX_STANDARD 20)

add_executable(network_messenger src/client/main_client.cpp
        src/client/client.cpp
        src/client/client.h)

add_executable(network_server src/server/main_server.cpp
        src/server/server.cpp
        src/server/server.h)

target_link_libraries(network_messenger Ws2_32)
target_link_libraries(network_server Ws2_32)
