#pragma once
#include "button_state.hpp"
#include "command.hpp"
#include <memory>
class Button {
private:
  std::unique_ptr<ButtonState> state_;
  Command *command_;
  enum State { NEUTRAL, HOVERED, CLICKED };
  State state_name_;
  friend class ButtonClicked;
  friend class ButtonNeutral;
  friend class ButtonHovered;
public:
  Button(Command *command);
  void OnClick();
  void OnHover();
  void HoverOut();
};
