#include "animation.hpp"
#include "button.hpp"
#include "graphic_handler.hpp"
#include "command_start_simulation.hpp"
#include "utils.hpp"
#include <exception>
#include <iostream>
#include <map>
#include <ostream>
#include <string>
#include <utility>

int main(int argc, char* args[]) {

  try {
    SDL_Event event;
    bool running = true;
    GraphicHandler graphic_handler{};
    CommandStartSimulation start_simulation{};

    Button btn_start(&start_simulation);
    Animation btn_start_animation(
        btn_start, "test.bmp",
        std::map<int, std::pair<SDL_Rect, int>>{
            {Button::NEUTRAL, std::make_pair(SDL_Rect{0, 0, 176, 64}, 1)},
            {Button::HOVERED, std::make_pair(SDL_Rect{0, 64, 176, 64}, 1)},
            {Button::CLICKED, std::make_pair(SDL_Rect{0, 128, 176, 64}, 1)}},
        graphic_handler.GetRenderer());

    while (running) {
      graphic_handler.ClearRenderer();
      graphic_handler.Render(btn_start_animation, std::make_pair(200, 200));
      graphic_handler.UpdateScreen();

      while (SDL_PollEvent(&event)) {
        switch (event.type) {
        case SDL_QUIT:
          running = false;
        case SDL_MOUSEBUTTONDOWN:
          btn_start.OnClick();
        }
      }
      if (MouseHoverChecker(SDL_Rect{200, 200, 172, 64})) {
        btn_start.OnHover();
      }
      else{
        btn_start.HoverOut();
      }
    }
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  return 0;
}
