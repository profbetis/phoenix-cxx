project(Phoenix CXX C)

set(SDLRenderer_SRCS
  renderer.cxx
)

add_library(SDLRenderer STATIC ${SDLRenderer_SRCS})

find_package(SDL2 REQUIRED)

target_include_directories(SDLRenderer PUBLIC
  ${SDL2_INCLUDE_DIR}
  ${Phoenix_INCLUDE_DIR}/error
  ${Phoenix_INCLUDE_DIR}/sdl
)

target_link_libraries(SDLRenderer
  ${SDL2_LIBRARY}
  Error
)

set_property(TARGET SDLRenderer PROPERTY CXX_STANDARD 11)
set_property(TARGET SDLRenderer PROPERTY CXX_STANDARD_REQUIRED ON)
