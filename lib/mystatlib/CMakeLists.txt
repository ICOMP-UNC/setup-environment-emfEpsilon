# Request minimum version
cmake_minimum_required(VERSION 3.25  FATAL_ERROR)

# Definining Cmake project
project(
    "mystatlib"
    VERSION 1.0.0
    DESCRIPTION "Lab0, Static library compiled from cmake for Operating System II"
    LANGUAGES C
)

# Defining C Standard
set(CMAKE_C_STANDARD 17)

# Including 'include' directory
include_directories(include)

# Setting the source code directory
file(GLOB_RECURSE SOURCES "src/*.c")

# Adding Library
add_library(${PROJECT_NAME} STATIC ${SOURCES})
