#pragma once
#include "button_state.hpp"
#include "command.hpp"
#include "game_object.hpp"
#include <memory>
class Button : public GameObject {
public:
  enum State { NEUTRAL, HOVERED, CLICKED };

private:
  std::unique_ptr<ButtonState> state_;
  Command *command_;
  State state_name_;
  friend class ButtonClicked;
  friend class ButtonNeutral;
  friend class ButtonHovered;

public:
  Button(Command *command);
  ~Button();
  void OnClick();
  void OnHover();
  void HoverOut();
  int GetState();
};
