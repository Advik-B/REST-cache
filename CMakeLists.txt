cmake_minimum_required(VERSION 3.26)
project(REST_cache)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# The executable will be in the bin directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Add the sources
file(GLOB SOURCES "src/*.cpp")

# Add the headers
file(GLOB HEADERS "include/*.h")

# Create the library
add_library(${PROJECT_NAME} STATIC ${SOURCES} ${HEADERS})

# Test the library
add_executable(${PROJECT_NAME}_test test/main.cpp)
target_link_libraries(${PROJECT_NAME}_test ${PROJECT_NAME})
target_include_directories(${PROJECT_NAME}_test PRIVATE "src")