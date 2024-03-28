# Request minimum verision of Cmake, 
cmake_minimum_required(VERSION 3.25  FATAL_ERROR)

# Defining Cmake Project
project(
    "lab0"
    VERSION 1.0.0 
    DESCRIPTION "Lab0 for setting up the developent enviroment for Operating System II"
    LANGUAGES C
)

# Enable testing and add the tests
include(CTest)

# Defining C Standard
set(CMAKE_C_STANDARD 17)

# Including the 'include' directory
include_directories(include)

# To automatic download external deps
include(FetchContent)

# Url of Unity
set(UNITY_GIT_URL "https://github.com/ThrowTheSwitch/Unity.git")

# Enable Debug
set(FETCHCONTENT_QUIET OFF)

FetchContent_Declare(
    Unity
    GIT_REPOSITORY ${UNITY_GIT_URL}
    SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/external/Unity
    UPDATE_COMMAND ""
)

# Wait for fetch content
FetchContent_MakeAvailable(Unity)

# Setting the source code directory
file(GLOB_RECURSE SOURCES "src/*.c")

# Adding executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Adding subdirectories to the build. 
add_subdirectory(lib/mydynlib)
add_subdirectory(lib/mystatlib)

# Specifies include directories to use when compiling a given target (my target is the project).
target_include_directories(${PROJECT_NAME} PUBLIC lib/mydynlib/include)
target_include_directories(${PROJECT_NAME} PUBLIC lib/mystatlib/include)    

# Specify libraries to use when linking a given target and/or its dependents. 
target_link_libraries(${PROJECT_NAME} mydynlib mystatlib)

if (RUN_TESTS EQUAL 1 OR RUN_COVERAGE EQUAL 1)
    add_subdirectory(tests)
endif()
