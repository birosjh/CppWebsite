cmake_minimum_required(VERSION 3.8)

project(website)

add_executable(website main.cpp)

find_package(oatpp 1.3.0 REQUIRED)

target_link_libraries(website
        PUBLIC oatpp::oatpp
        PUBLIC oatpp::oatpp-test
)

