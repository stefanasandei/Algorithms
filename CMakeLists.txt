cmake_minimum_required(VERSION 3.5)

set(PROJECT_NAME algos)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

project(${PROJECT_NAME})
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")

set(INCLUDE_DIRS ${INCLUDE_DIRS} ${PROJECT_SOURCE_DIR}/include)

include_directories(${INCLUDE_DIRS})

file(GLOB_RECURSE LIB_SRC_FILES include/*.h)

set(SOURCE_FILES src/hello.c src/test.c)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})
