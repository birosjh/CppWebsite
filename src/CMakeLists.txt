cmake_minimum_required(VERSION 3.8)

project(website)

add_executable(website main.cpp)

find_package(Crow)
target_link_libraries(website PUBLIC Crow::Crow)
