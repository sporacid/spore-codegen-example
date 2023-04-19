cmake_minimum_required(VERSION 3.15)

project(spore.codegen.example)

set(CMAKE_CXX_STANDARD 17)

list(
  APPEND CMAKE_MODULE_PATH
    ${CMAKE_CURRENT_SOURCE_DIR}/cmake
    ${CMAKE_CURRENT_BINARY_DIR}/content/spore-codegen/cmake
)

# Removes warning for undefined attributes
add_compile_options(
    "$<$<CXX_COMPILER_ID:MSVC>:/wd5030>"
    "$<$<CXX_COMPILER_ID:GNU>:-Wno-attributes>"
    "$<$<CXX_COMPILER_ID:Clang>:-Wno-attributes>"
)

include(FetchContent_spore_codegen)
include(spore_codegen)

add_executable(${PROJECT_NAME} src/main.cpp)

target_include_directories(
  ${PROJECT_NAME}
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/.codegen/include
)

spore_codegen(
  ${PROJECT_NAME}
)