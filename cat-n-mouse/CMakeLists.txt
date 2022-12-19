cmake_minimum_required (VERSION 3.8)

project ("cat-n-mouse")

add_subdirectory(geom)

include_directories(.)

add_executable(geom.test
	cat-n-mouse.test.cpp 
)

target_link_libraries(geom.test geom)