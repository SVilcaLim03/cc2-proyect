#include "animation.hpp"
#include "background.hpp"
#include "button.hpp"
#include "button_observer.hpp"
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
    MouseInput *mouse_input = input_handler.GetMouseInput();

    CommandStartSimulation start_simulation{};

    GameObject btn_start{new Button(&start_simulation), 200, 200};
    btn_start.SetAnimation(
        "test.png",
        std::map<int, std::pair<SDL_Rect, int>>{
            {Button::NEUTRAL, std::make_pair(SDL_Rect{0, 0, 176, 64}, 1)},
            {Button::HOVERED, std::make_pair(SDL_Rect{0, 64, 176, 64}, 1)},
            {Button::CLICKED, std::make_pair(SDL_Rect{0, 128, 176, 64}, 1)}},
        renderer);
    btn_start.SetObserver(
        new ButtonObserver(btn_start.GetLocation(), btn_start.GetAnimation()),
        dynamic_cast<Observable *>(mouse_input));
    GameObject menu_title{new Background(), 0, 0};
    menu_title.SetAnimation(
        "title.png",
        std::map<int, std::pair<SDL_Rect, int>>{
            {Background::NEUTRAL, std::make_pair(SDL_Rect{0, 0, 690, 254}, 6)}},
        renderer);
    GameObject menu_background{new Background(), 0, 0};
    menu_background.SetAnimation(
        "background.png",
        std::map<int, std::pair<SDL_Rect, int>>{
            {0, std::make_pair(SDL_Rect{0, 0, 1280, 720}, 12)}},
        renderer);


    while (running) {
      input_handler.Listen();

      graphic_handler.ClearRenderer();
      // graphic_handler.Render(*btn_start.GetAnimation(),
      //                        btn_start.GetLocation()->GetPosititon());
      // graphic_handler.Render(*menu_title.GetAnimation(),
      //                        menu_title.GetLocation()->GetPosititon());

      graphic_handler.Render(menu_background.GetAnimation(),
                             menu_background.GetLocation()->GetPosititon());
      graphic_handler.UpdateScreen();
      SDL_Delay(32);
    }
    return 0;

  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
    return 1;
  }
}
