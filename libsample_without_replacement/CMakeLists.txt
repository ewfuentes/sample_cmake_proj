
add_library(sample_without_replacement STATIC IMPORTED GLOBAL)

set_target_properties(sample_without_replacement PROPERTIES
  IMPORTED_LOCATION ${CMAKE_CURRENT_SOURCE_DIR}/lib/common/math/libsample_without_replacement.a
  INTERFACE_INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/include/
)

