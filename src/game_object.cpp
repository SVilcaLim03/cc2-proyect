#include "game_object.hpp"
GameObject::GameObject(Object *&&object)
    : object_(object), animation_(nullptr), location_(nullptr) {}
GameObject::~GameObject() {
  delete animation_;
  delete location_;
  delete object_;
}
void GameObject::SetAnimation(
    std::string &&sprite_path,
    std::map<int, std::pair<SDL_Rect, int>> &&sprite_map,
    SDL_Renderer *&renderer) {
  animation_ = new Animation(object_, sprite_path, sprite_map, renderer);
}
void GameObject::SetLocation(int &&x, int &&y) {
  location_ = new Location(x, y);
}
Location &GameObject::GetLocation() const { return *location_; }

Animation &GameObject::GetAnimation() const { return *animation_; }

Object *GameObject::GetObject() { return object_; }
