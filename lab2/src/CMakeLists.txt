cmake_minimum_required(VERSION 3.0)
project(project)
set(SOURCE_EXE src/main.c src/bebrash.c)
add_executable(bebrash ${SOURCE_EXE})
target_include_directories(bebrash PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/./include)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../bin)