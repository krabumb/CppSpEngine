cmake_minimum_required(VERSION 3.24)
project(CppSpEngine)

set(CMAKE_CXX_STANDARD 20)

set(GLFW_PATH "${CMAKE_SOURCE_DIR}/libs/glfw")
set(GLEW_PATH "${CMAKE_SOURCE_DIR}/libs/glew")

include_directories(${GLFW_PATH}/include)
include_directories(${GLEW_PATH}/include)

link_directories(${GLFW_PATH}/lib)
link_directories(${GLEW_PATH}/lib)

find_package(OpenGL REQUIRED)
include_directories(src)
add_executable(CppSpEngine main.cpp)

target_link_libraries(CppSpEngine glfw3 glew32 ${OPENGL_gl_LIBRARY})
