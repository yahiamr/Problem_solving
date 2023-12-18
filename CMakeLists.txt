cmake_minimum_required(VERSION 3.10)
project(ProblemSolving)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 17)

# Use glob to find all CPP_Solution.cpp files in subdirectories
file(GLOB PROBLEM_SOURCES "*_*/CPP_Solution.cpp")

# Create an executable for each found source file
foreach(PROBLEM_SOURCE ${PROBLEM_SOURCES})
    # Extract a meaningful name for each executable
    get_filename_component(PROBLEM_DIR_NAME ${PROBLEM_SOURCE} DIRECTORY)
    get_filename_component(PROBLEM_EXEC_NAME ${PROBLEM_DIR_NAME} NAME_WE)
    
    # Create an executable
    add_executable(${PROBLEM_EXEC_NAME} ${PROBLEM_SOURCE})
endforeach()
