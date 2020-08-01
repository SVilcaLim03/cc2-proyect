#include "state_handler.hpp"

#include <SDL2/SDL_render.h>
StateHandler::StateHandler(){}
void StateHandler::NextSpriteUnit(Renderable &b){
  int width;
  int height;
  SDL_QueryTexture(b.image_,NULL,NULL,&width,&height);
  if(b.sprite_unit_rect_.x<width)
  {b.sprite_unit_rect_.x+=b.sprite_unit_rect_.w;}
  else {
    b.sprite_unit_rect_.x=0;
  }

}
