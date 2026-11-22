cmake_minimum_required(VERSION 3.20)

project(M_CPP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(MCPP_ROOT "${CMAKE_CURRENT_SOURCE_DIR}")

set(INCLUDE_DIR "${MCPP_ROOT}/holy_bp_genetic_blueprints")
set(SRC_DIR "${MCPP_ROOT}/sub3_to_true_adam_looksmaxxing")
set(TEST_DIR "${MCPP_ROOT}/its_over_holy_bp_autopsy")

# find the sources bro (recurse like chad)
file( GLOB_RECURSE MCPP_SOURCES 
    CONFIGURE_DEPENDS "${SRC_DIR}/*.cpp")

# exactly what it says
add_executable(server ${MCPP_SOURCES})

# include the includes
target_include_directories(server PRIVATE "${INCLUDE_DIR}")

# testing! it means surgerymaxxing (autopsy only, not implants sadly)
if(BUILD_TESTING)
include(CTest)
file( GLOB_RECURSE MCPP_TEST_SOURCES 
    CONFIGURE_DEPENDS "${TEST_DIR}/*.cpp")
foreach(TEST_SOURCE ${MCPP_TEST_SOURCES}) 
get_filename_component(
    TEST_NAME "${TEST_SOURCE}" NAME_WE # because linix 
)
add_executable(${TEST_NAME} "${TEST_SOURCE}")
target_include_directories(${TEST_NAME} PRIVATE "${INCLUDE_DIR}")
add_test(NAME ${TEST_NAME} COMMAND ${TEST_NAME}) #register ctest
endforeach()
endif()