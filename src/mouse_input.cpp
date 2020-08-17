#include "mouse_input.hpp"

void MouseInput::AddObserver(Observer *observer) {
  observers_.push_front(observer);
}
void MouseInput::RemoveObserver(Observer *observer) {}

void MouseInput::Notify() {
  for (auto observer : observers_) {
    observer->Update();
  }
}

std::pair<MouseInput::Action, std::pair<int, int>> MouseInput::GetEvent() {
  return event_;
}
