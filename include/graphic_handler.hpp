#ifdef _WIN32
#include <SDL.h>
#include <SDL_image.h>
#else
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#endif

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
