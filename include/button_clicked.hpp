#pragma once
#include "button_state.hpp"
#include "command.hpp"
#include "button.hpp"

class ButtonClicked : public ButtonState {
private:
  Button * button_;
public:
  ButtonClicked(Button &button);
  ~ButtonClicked();
  void OnHover();
  void OnClick();
  void HoverOut();
};
