#include <SDL2/SDL.h>
// #include<SDL2/SDL_image.h>
class GraphicHandler {
 private:
  SDL_Window* window_;
  SDL_Renderer* renderer_;

  friend class SystemHandler;
  GraphicHandler();
  ~GraphicHandler();

 public:
  SDL_Renderer* GetRenderer();
};
