cmake_minimum_required(VERSION 3.15)

project(spore-codegen-example)

set(CMAKE_CXX_STANDARD 20)

add_executable(${PROJECT_NAME} src/main.cpp)

target_include_directories(
  ${PROJECT_NAME}
  PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/include
  ${CMAKE_CURRENT_SOURCE_DIR}/.codegen/include
)

find_package(spore-codegen CONFIG REQUIRED)

list(APPEND CMAKE_MODULE_PATH ${SPORE_CODEGEN_SCRIPTS})

include(SporeCodegen)

spore_codegen(
  ${PROJECT_NAME}
  BIN_NAME spore::spore-codegen
  CACHE .codegen/cache.yml
)