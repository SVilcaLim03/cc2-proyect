#pragma once
#include "button.hpp"
#include "button_state.hpp"
class ButtonNeutral : public ButtonState {
private:
  Button *button_;

public:
  ButtonNeutral(Button &button);
  ~ButtonNeutral();
  void OnHover();
  void OnClick();
  void HoverOut();
};
