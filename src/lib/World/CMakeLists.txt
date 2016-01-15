project(Phoenix CXX C)

set(World_SRCS
  world.cxx
  tile.cxx
)

add_library(World STATIC ${World_SRCS})

target_include_directories(World PUBLIC
  ${Phoenix_INCLUDE_DIR}/world
  ${Phoenix_INCLUDE_DIR}/sdl
  ${Phoenix_INCLUDE_DIR}/graphics
  ${SDL2_INCLUDE_DIR}
)

set_property(TARGET World PROPERTY CXX_STANDARD 11)
set_property(TARGET World PROPERTY CXX_STANDARD_REQUIRED ON)
