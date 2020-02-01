cmake_minimum_required(VERSION 2.8)
set (CMAKE_CXX_STANDARD 11)
project( comm CXX)

file(GLOB_RECURSE SOURCES 
"src/*.cpp"
"include/comm/*.h")

include_directories(
    include
)

add_library( ${PROJECT_NAME} SHARED ${SOURCES} )


# Install library
install(TARGETS ${PROJECT_NAME} DESTINATION lib/${PROJECT_NAME})

file(GLOB HEADERS 
"include/comm/*.h"
"include/comm/*.hpp")

install(FILES ${HEADERS} DESTINATION include/${PROJECT_NAME})