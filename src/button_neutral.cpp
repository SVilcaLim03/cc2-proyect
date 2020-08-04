#include "button_neutral.hpp"
#include "button_clicked.hpp"
#include "button_hovered.hpp"
#include <memory>
ButtonNeutral::ButtonNeutral(Button &button) : button_(&button) {
  button_->state_name_ = Button::NEUTRAL;
}

ButtonNeutral::~ButtonNeutral() {}

void ButtonNeutral::HoverOut() {}

void ButtonNeutral::OnClick() {
  button_->state_ = std::make_unique<ButtonState>(ButtonClicked(*button_));
}

void ButtonNeutral::OnHover() {
  button_->state_ = std::make_unique<ButtonState>(ButtonHovered(*button_));
}
