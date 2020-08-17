#include "button_observer.hpp"
ButtonObserver::ButtonObserver()
    : button_(nullptr), location_(nullptr), observable_(nullptr) {}

void ButtonObserver::SetLocation(Location *&location) { location_ = location; }
void ButtonObserver::SetObservable(Observable *&observable) {
  observable_ = dynamic_cast<MouseInput *>(observable);
}
void ButtonObserver::Update() {
  auto event = observable_->GetEvent();
  switch (event.first) {
  case MouseInput::CLICK:

    break;
  }
}
