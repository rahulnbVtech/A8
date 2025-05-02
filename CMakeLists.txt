cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(A8)

add_executable (assignmentA8 "main.cpp" "builder.h" "car.h" "carbuilder.h" "clientcode.h" "director.h" "manual.h" "manualbuilder.h" "car.cpp" "carbuilder.cpp" "clientcode.cpp" "director.cpp" "manual.cpp" "manualbuilder.cpp")
add_executable (assignmentA8 "test.cpp" "builder.h" "car.h" "carbuilder.h" "clientcode.h" "director.h" "manual.h" "manualbuilder.h" "car.cpp" "carbuilder.cpp" "clientcode.cpp" "director.cpp" "manual.cpp" "manualbuilder.cpp")

# Include directories
target_include_directories(assignmentA8 PRIVATE ${CMAKE_SOURCE_DIR})

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET assignmentA8 PROPERTY CXX_STANDARD 20)
endif()