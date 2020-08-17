#pragma once
#include "animation.hpp"
#include "button.hpp"
#include "observable.hpp"
#include "mouse_input.hpp"
class ButtonHandler : public Observer {
private:
  Animation *animation_;
  Button *button_;
  MouseInput * observable_;

public:
  ButtonHandler(Animation *animation, Button *button, MouseInput * observable);
  ~ButtonHandler();
  void Update();

};
