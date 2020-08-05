#pragma once
#include "button.hpp"
#include "button_state.hpp"
class ButtonHovered :public ButtonState{
private:
  Button *button_;

public:
  ButtonHovered(Button &button);
  ~ButtonHovered();
  void OnHover();
  void OnClick();
  void HoverOut();
};
