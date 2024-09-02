cmake_minimum_required(VERSION 3.30)
project(lecture1)



set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

set(CMAKE_EXPORT_COMPILE_COMMANDS YES)


add_executable(single_thread src/single_thread.cpp)
add_executable(memory src/memory.cpp)


add_custom_target(run_single_thread
    COMMAND single_thread
    DEPENDS single_thread
    WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
    COMMENT "Build and run single thread process"
)

add_custom_target(run_memory
    COMMAND memory
    DEPENDS memory
    WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
    COMMENT "Build and run memory allocation example"
)
