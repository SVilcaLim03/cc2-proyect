#include "button_observer.hpp"
ButtonObserver::ButtonObserver(Location *&location, Animation *&animation)
    : button_(nullptr), location_(location), observable_(nullptr),
      animation_(animation) {}
void ButtonObserver::SetObservable(Observable *&observable) {
  observable_ = dynamic_cast<MouseInput *>(observable);
}
void ButtonObserver::Update() {
  auto event = observable_->GetEvent();
  auto region_size = animation_->GetFrameSize();
  auto region_pos = location_->GetPosititon();
  SDL_Rect region{region_pos.first, region_pos.second, region_size.first,
                  region_size.second};
  switch (event.first) {
  case MouseInput::CLICK:
    break;
  case MouseInput::NEUTRAL:
    if (MouseHoverChecker(region, event.second)) {
      button_->OnHover();
    } else {
      button_->HoverOut();
    }
    break;
  }
}
