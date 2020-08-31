cmake_minimum_required(VERSION 2.8)
set (CMAKE_CXX_STANDARD 11)
project( tests )

file(GLOB tests_SRC
    "integ/*.cpp"
    #"unit/*.cpp"
)

include_directories( include 
 ${BOOST_INCLUDE_DIRS})

find_package( Boost COMPONENTS filesystem system REQUIRED )
find_package (Threads REQUIRED)


link_directories( /usr/local/lib/comm )

add_executable( tests ${tests_SRC} )

target_link_libraries( tests ${OpenCV_LIBS} comm ${realsense2_LIBRARY}  ${CMAKE_THREAD_LIBS_INIT} ${Boost_FILESYSTEM_LIBRARY} ${Boost_SYSTEM_LIBRARY})