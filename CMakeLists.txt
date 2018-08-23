cmake_minimum_required(VERSION 2.8)
project( DisplayImage )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( DisplayImage main.cpp )
target_link_libraries( DisplayImage ${OpenCV_LIBS} )

add_executable( chapter1_demo chapter1_demo.cpp )
target_link_libraries( chapter1_demo ${OpenCV_LIBS} )

add_executable( chapter1_video chapter1_video.cpp )
target_link_libraries( chapter1_video ${OpenCV_LIBS} )
