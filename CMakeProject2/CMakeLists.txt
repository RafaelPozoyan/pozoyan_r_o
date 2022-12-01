cmake_minimum_required (VERSION 3.8)

project ("CMakeProject2")

add_library(CMAkeProject2 CMAkeProject2.cpp CMAkeProject2.hpp)

add_executable(CMAkeProject2.test
	CMAkeProject2.test.cpp 
	CMAkeProject2.hpp
)

target_link_libraries(CMAkeProject2.test CMAkeProject2)