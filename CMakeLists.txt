cmake_minimum_required(VERSION 3.3)
project(cborcpp)

set(CBOR_SOURCE_FILES
    cbor/encoder.cpp
    cbor/decoder.cpp
    cbor/input.cpp
    cbor/listener_debug.cpp
    cbor/output_dynamic.cpp
    cbor/output_static.cpp
    )

add_library(cborcpp ${CBOR_SOURCE_FILES})
target_include_directories(cborcpp PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
