cmake_minimum_required(VERSION 2.8)
set (CMAKE_CXX_STANDARD 11)
project( comm)

file(GLOB SOURCES 
"src/*.cpp"
"include/*.h")

include_directories(
    include
)

add_library( ${PROJECT_NAME} SHARED ${SOURCES} )


# Install library
install(TARGETS ${PROJECT_NAME} DESTINATION lib/${PROJECT_NAME})

# Install library headers
file(GLOB HEADERS include/*.h)

install(FILES ${HEADERS} DESTINATION include/${PROJECT_NAME})