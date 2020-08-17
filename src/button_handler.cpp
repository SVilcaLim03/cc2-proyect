#include <button_handler.hpp>
ButtonHandler::ButtonHandler(Animation *animation, Button *button,
                             MouseInput *observable)
    : animation_(animation), button_(button), observable_(observable) {}
ButtonHandler::~ButtonHandler() {}
void ButtonHandler::Update() {
  auto event = observable_->GetEvent();
  switch (event.first) {
  case MouseInput::CLICK:

    break;
  }
}
