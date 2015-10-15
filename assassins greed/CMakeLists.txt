cmake_minimum_required(VERSION 2.8.4)
project(assassins-greed)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -std=c++11 -O3")

IF ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU" OR
            "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")        
    SET(warnings "-Wall -Wextra -Werror")
ENDIF ()

set(CMAKE_BUILD_TYPE Release)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "./bin")

# IF (APPLE)
#     SET(CMAKE_INCLUDE_PATH ${CMAKE_INCLUDE_PATH} "/usr/local/include/")
#     SET(CMAKE_LIBRARY_PATH ${CMAKE_LIBRARY_PATH} "/usr/local/lib/")
# ENDIF (APPLE)

# FIND_PACKAGE(Boost COMPONENTS system thread coroutine context REQUIRED)
# message("Boost include dir: ${Boost_INCLUDE_DIR}")
# message("Boost libraries: ${Boost_LIBRARIES}")

# IF (Boost_FOUND)
#    INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})
#    ADD_DEFINITIONS( "-DHAS_BOOST" )
# ENDIF()

# FIND_PACKAGE(Threads REQUIRED)
# MESSAGE("Threads libraries/flag: ${CMAKE_THREAD_LIBS_INIT}")


ADD_SUBDIRECTORY(src)

add_custom_target(copy-runtime-files ALL
    COMMAND cmake -E copy_directory ${CMAKE_SOURCE_DIR}/data ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/data
    DEPENDS ${MY_TARGET})

add_executable(bruteforce bruteforce.cpp)
add_executable(greedy greedy.cpp)
add_executable(dynamic dynamic.cpp)

target_link_libraries(bruteforce z algorithms domain helper)
target_link_libraries(greedy z algorithms domain helper)
target_link_libraries(dynamic z algorithms domain helper)