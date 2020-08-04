#include <SDL2/SDL.h>
#include <SDL2/SDL_render.h>
#include "animation.hpp"
class GraphicHandler {
private:
  SDL_Renderer *renderer;
  SDL_Window * main_window;
public:
  GraphicHandler();
  ~GraphicHandler();
  void Render(Animation & animation, std::pair<int,int> position);
  void UpdateScreen();
};
