#include <SDL2/SDL.h>
#include<SDL2/SDL_image.h>
class GraphicHandler {
 private:
  SDL_Window* window;
  SDL_Renderer* renderer;

  friend class SystemHandler;

 public:
  GraphicHandler(/* args */);
  ~GraphicHandler();
};

GraphicHandler::GraphicHandler(/* args */) {}

GraphicHandler::~GraphicHandler() {}
