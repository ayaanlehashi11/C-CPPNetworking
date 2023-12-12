cmake_minimum_required(VERSION 3.0.2)

project(net)

include_directories(${PROJECT_SOURCE_DIR})
add_executable(net dns_query.cpp)