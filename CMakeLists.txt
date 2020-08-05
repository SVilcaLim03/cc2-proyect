#on root of the proyect
#cmake -D CMAKE_C_COMPILER=clang -D CMAKE_CXX_COMPILER=clang++ -Bbuild -H.  -DCMAKE_EXPORT_COMPILE_COMMANDS=1
cmake_minimum_required(VERSION 3.18)
project(lavaina LANGUAGES CXX)
set (CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_library(Button
  src/button.cpp
  src/button_clicked.cpp
  src/button_hovered.cpp
  src/button_neutral.cpp
  src/button_state.cpp
)

add_library(Animation
  src/animation.cpp
)
add_library(GameObject
  src/game_object.cpp
  )
add_library(Game
  src/graphic_handler.cpp
)
include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(main
    src/main.cpp
)

# target_link_libraries(GameObject Button)
# target_link_libraries(Animation Button)
# target_link_libraries(Animation Button)
target_link_libraries( main Game Button Animation GameObject SDL2 SDL2_image)
