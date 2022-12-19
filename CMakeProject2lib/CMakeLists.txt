cmake_minimum_required (VERSION 3.8)

project ("CMakeProject2lib")

add_subdirectory(geom)

include_directories(.)

add_executable(geom.test
	geom.test.cpp 
)

target_link_libraries(geom.test geom)