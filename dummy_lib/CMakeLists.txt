add_library(dummy-lib
    src/code.cc
)

target_include_directories(dummy-lib
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
  PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src/include
)
