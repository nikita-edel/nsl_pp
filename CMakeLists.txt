# Copyright 2019 Peter Dimov
# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt

cmake_minimum_required(VERSION 3.5...3.16)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)

project(
	boost_preprocessor
	VERSION "${NSL_SUPERPROJECT_VERSION}"
	LANGUAGES C
)

include(CTest)

add_library(boost_preprocessor INTERFACE)
add_library(Boost::preprocessor ALIAS boost_preprocessor)

target_include_directories(
	boost_preprocessor
	INTERFACE
		include
)

if(BUILD_TESTING)
	add_subdirectory(test)
endif()
