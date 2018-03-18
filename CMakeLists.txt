cmake_minimum_required (VERSION 3.1)
set (CMAKE_C_STANDARD 11)
set (CMAKE_CXX_STANDARD 11)

# project name
project (LazyGameEngine)

# paths for searching include files
include_directories("${PROJECT_SOURCE_DIR}/Framework/Common")
include_directories("${PROJECT_SOURCE_DIR}/Framework/Interface")

# need to execute sub CMakeLists.txt in the following directories
add_subdirectory(Framework)
add_subdirectory(Empty)
