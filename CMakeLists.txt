cmake_minimum_required(VERSION 3.10)

# set the project name
project(WeekendRT)

add_subdirectory(util) 

# add the executable
add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE Util)

