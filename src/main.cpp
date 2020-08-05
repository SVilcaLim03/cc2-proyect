#include "animation.hpp"
#include "button.hpp"
#include "graphic_handler.hpp"
#include <exception>
#include <iostream>
#include <map>
#include <ostream>
#include <string>
#include <utility>
int main() {

  try {
    SDL_Event event;
    bool running = true;
    GraphicHandler graphic_handler{};

    Button btn_start(nullptr);
    std::map<int, std::pair<SDL_Rect, int>> btn_start_sprite_map = {
        {Button::NEUTRAL, std::make_pair(SDL_Rect{0, 0, 176, 64}, 1)},
        {Button::HOVERED, std::make_pair(SDL_Rect{0, 64, 176, 64}, 1)},
        {Button::CLICKED, std::make_pair(SDL_Rect{0, 128, 176, 64}, 1)}};
    Animation btn_start_animation(btn_start, "test.png", btn_start_sprite_map,
                                  graphic_handler.GetRenderer());

    while (running) {
      graphic_handler.ClearRenderer();
      graphic_handler.Render(btn_start_animation, std::make_pair(200, 200));
      graphic_handler.UpdateScreen();

      while (SDL_PollEvent(&event)) {
        switch (event.type) {
        case SDL_QUIT:
          running = false;
        }
      }
    }
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}
