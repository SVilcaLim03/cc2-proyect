#include "button.hpp"
#include "button_neutral.hpp"

Button::Button(Command *command) : command_(command) {
  state_ = std::make_unique<ButtonState>(ButtonNeutral(*this));
}
void Button::OnClick() { state_->OnClick(); }
void Button::OnHover() { state_->OnHover(); }
