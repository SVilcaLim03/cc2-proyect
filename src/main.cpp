#include "animation.hpp"
#include "button.hpp"
#include "command_start_simulation.hpp"
#include "game_object.hpp"
#include "graphic_handler.hpp"
#include "utils.hpp"
#include <exception>
#include <iostream>
#include <map>
#include <ostream>
#include <string>
#include <utility>

int main(int argc, char *args[]) {

  try {
    SDL_Event event;
    bool running = true;
    GraphicHandler graphic_handler{};
    auto renderer = graphic_handler.GetRenderer();
    CommandStartSimulation start_simulation{};

    GameObject btn_start{new Button(&start_simulation)};
    btn_start.SetAnimation(
        "test.png",
        std::map<int, std::pair<SDL_Rect, int>>{
            {Button::NEUTRAL, std::make_pair(SDL_Rect{0, 0, 176, 64}, 1)},
            {Button::HOVERED, std::make_pair(SDL_Rect{0, 64, 176, 64}, 1)},
            {Button::CLICKED, std::make_pair(SDL_Rect{0, 128, 176, 64}, 1)}},
        renderer);
    btn_start.SetLocation(200,200);
    while (running) {
      graphic_handler.ClearRenderer();
      graphic_handler.Render(btn_start.GetAnimation(), btn_start.GetLocation().GetPosititon());
      graphic_handler.UpdateScreen();

      while (SDL_PollEvent(&event)) {
        switch (event.type) {
        case SDL_QUIT:
          running = false;
        case SDL_MOUSEBUTTONDOWN:
          dynamic_cast<Button *> (btn_start.object_)->OnClick();
          std::cout<<"holi\n";
          break;
        }
      }
      if (MouseHoverChecker(SDL_Rect{200, 200, 172, 64})) {
        dynamic_cast<Button *> (btn_start.object_)->OnHover();
        // static_cast<Button *> (btn_start.GetObject())->OnHover();

      } else {
        dynamic_cast<Button *> (btn_start.object_)->HoverOut();
      }
    }
    return 0;

  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
    return 1;
  }
}
