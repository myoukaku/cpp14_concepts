cmake_minimum_required(VERSION 3.14)

set(TARGET_NAME cpp14_concepts_test)

add_library(${TARGET_NAME} STATIC)

file(GLOB_RECURSE TEST_SOURCES CONFIGURE_DEPENDS src/*)

target_sources(${TARGET_NAME} PRIVATE ${TEST_SOURCES})

target_link_libraries(${TARGET_NAME} PRIVATE cpp14_concepts)
