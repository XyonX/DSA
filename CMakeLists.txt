cmake_minimum_required(VERSION 3.10)
project(Project_Name)

function(add_executable_with_includes name)
  add_executable(${name} "Source/src/${name}.cpp")
  target_include_directories(${name} PRIVATE "Source/include")
endfunction()


file(GLOB_RECURSE SOURCES "Source/src/*.cpp")
file(GLOB_RECURSE HEADERS "Source/include/*.h")

file(GLOB_RECURSE SOURCES_CLASS "Source/include/Classes/*.cpp")
file(GLOB_RECURSE HEADERS_CLASS "Source/include/Classes/*.h")


set(SOURCES_DRAGON
    "Source/src/Array_Dynamic.cpp"
    "Source/src/Dragon.cpp"
)

set(HEADERS_DRAGON
    "Source/include/Dragon.h"
)



add_executable_with_includes(Array_Static)
add_executable(Array_Dynamic  "Source/src/Array_Dynamic.cpp" ${SOURCES_CLASS} ${HEADERS_CLASS})
target_include_directories(Array_Dynamic PRIVATE "Source/include")



set(CMAKE_PREFIX_PATH "C:/Libraries/vcpkg/installed")