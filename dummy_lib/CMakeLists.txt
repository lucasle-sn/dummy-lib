add_library(dummy-lib
    src/public_code.cc
    src/private_code.cc
)

target_include_directories(dummy-lib
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
  PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src/include
)
