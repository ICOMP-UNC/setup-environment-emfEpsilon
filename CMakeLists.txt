# Request minimum verision of Cmake, 
cmake_minimum_required(VERSION 3.25  FATAL_ERROR)

# Defining Cmake Project
project(
    "lab0"
    VERSION 1.0.0 
    DESCRIPTION "Lab0 for setting up the developent enviroment for Operating System II"
    LANGUAGES C
)

# Defining C Standard
set(CMAKE_C_STANDARD 17)

# Including the 'include' directory
include_directories(include)

# Setting the source code directory
file(GLOB_RECURSE SOURCES "src/*.c")

# Adding executable
add_executable(${PROJECT_NAME} ${SOURCES})