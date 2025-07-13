cmake_minimum_required(VERSION 3.15)

# Set the compiler
set(CMAKE_CXX_STANDARD 17)

# Set the project name
project(command)

set(CMAKE_CXX_FLAGS -pthread)

# Create a sources variable with a link to all cpp files to compile
file(GLOB SOURCES "*.cpp")

# Add an executable with the above sources
add_executable(command ${SOURCES})
