cmake_minimum_required(VERSION 3.3)
project(cborcpp)

set(CBOR_SOURCE_FILES
    src/encoder.cpp
    src/decoder.cpp
    src/input.cpp
    src/listener_debug.cpp
    src/output_dynamic.cpp
    src/output_static.cpp
    )

add_library(cborcpp ${CBOR_SOURCE_FILES})
