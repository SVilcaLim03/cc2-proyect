#on root of the proyect
#cmake -D CMAKE_C_COMPILER=clang -D CMAKE_CXX_COMPILER=clang++ -Bbuild -H.  -DCMAKE_EXPORT_COMPILE_COMMANDS=1
cmake_minimum_required(VERSION 3.18)
project(cc)
set (CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_library(GameObjects STATIC
  src/scenario.cpp
  src/entity.cpp
  src/game_image.cpp
  src/renderable.cpp
)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(main
    src/main.cpp
)

target_link_libraries( main SDL2 SDL2_image GameObjects)
