#include "game_object.hpp"
GameObject::GameObject(Object *&&object, int &&x, int &&y)
    : object_(object), animation_(nullptr), location_(new Location(x, y)),
      observer_(nullptr) {}
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
Location *&GameObject::GetLocation() { return location_; }

Animation *&GameObject::GetAnimation() { return animation_; }

Object *GameObject::GetObject() { return object_; }

void GameObject::SetObserver(Observer *&&observer, Observable *observable) {
  observer_ = observer;
  observer_->SetObservable(observable);
  observable->AddObserver(observer_);
}
