#include "animation.hpp"
#include "button.hpp"
#include "command_start_simulation.hpp"
#include "game_object.hpp"
#include "graphic_handler.hpp"
#include "input_handler.hpp"
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
    InputHandler input_handler{&running};

    CommandStartSimulation start_simulation{};

    GameObject btn_start{new Button(&start_simulation), 200, 200};
    btn_start.SetAnimation(
        "test.png",
        std::map<int, std::pair<SDL_Rect, int>>{
            {Button::NEUTRAL, std::make_pair(SDL_Rect{0, 0, 176, 64}, 1)},
            {Button::HOVERED, std::make_pair(SDL_Rect{0, 64, 176, 64}, 1)},
            {Button::CLICKED, std::make_pair(SDL_Rect{0, 128, 176, 64}, 1)}},
        renderer);

    while (running) {
      graphic_handler.ClearRenderer();
      graphic_handler.Render(btn_start.GetAnimation(),
                             btn_start.GetLocation().GetPosititon());
      graphic_handler.UpdateScreen();
      input_handler.Listen();
    }
    return 0;

  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
    return 1;
  }
}
