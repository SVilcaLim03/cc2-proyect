#include "button.hpp"
#include "button_neutral.hpp"

Button::Button(Command *command) : command_(command) {
  state_ = std::make_unique<ButtonNeutral>(*this);
}

Button::~Button() {}

void Button::OnClick() { state_->OnClick(); }

void Button::OnHover() { state_->OnHover(); }

void Button::HoverOut() { state_->HoverOut(); }

int Button::GetState() { return state_name_; }
