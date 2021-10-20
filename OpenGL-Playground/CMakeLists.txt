cmake_minimum_required(VERSION 3.10)

project(OpenGL)
set(CMAKE_CXX_FLAGS -std=c++17)

file(GLOB SOURCES "src/*.cpp")

# Main Executable
add_executable(play ${SOURCES})

# Find External Dependencies
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

# Include dirs
include_directories(${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS})
include_directories(include)

# Link to the final executable
target_link_libraries(play ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
