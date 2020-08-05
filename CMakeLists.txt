##linux
#cmake -D CMAKE_C_COMPILER=clang -D CMAKE_CXX_COMPILER=clang++ -Bbuild -H.  -DCMAKE_EXPORT_COMPILE_COMMANDS=1

##windows
#cmake -D CMAKE_C_COMPILER=clang -D CMAKE_CXX_COMPILER=clang++ -Bbuild -H.  -DCMAKE_EXPORT_COMPILE_COMMANDS=1
cmake_minimum_required(VERSION 3.17)
project(lavaina LANGUAGES CXX)
set (CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
include_directories(${PROJECT_SOURCE_DIR}/include)


if(WIN32)
  include_directories(${PROJECT_SOURCE_DIR}/lib/SDL2/include)
  include_directories(${PROJECT_SOURCE_DIR}/lib/SDL2_image/include)
endif()

add_executable(main
    src/main.cpp
)
add_library(Game
  src/game_object.cpp
  src/button.cpp
  src/button_clicked.cpp
  src/button_hovered.cpp
  src/button_neutral.cpp
  src/button_state.cpp
  src/command.cpp
  src/command_start_simulation.cpp
  src/animation.cpp
  src/graphic_handler.cpp
  src/utils.cpp
)


if(WIN32)
  add_library(SDL2
    include_directories(${PROJECT_SOURCE_DIR}/lib/SDL2/include/x64/SDL.lib)
    )
  add_library(SDL2_image
    include_directories(${PROJECT_SOURCE_DIR}/lib/SDL2/include/x64/SDL_image.lib)
    )
endif()

target_link_libraries( main Game SDL2 SDL2_image)
