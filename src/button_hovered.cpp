#include "button_hovered.hpp"
#include "button_clicked.hpp"
#include "button_neutral.hpp"
#include <memory>
ButtonHovered::ButtonHovered(Button &button) : button_(&button) {
  button_->state_name_ = Button::HOVERED;
}

ButtonHovered::~ButtonHovered() {}

void ButtonHovered::OnHover() {}

void ButtonHovered::OnClick() {
  button_->state_ = std::make_unique<ButtonState>(ButtonClicked(*button_));
}

void ButtonHovered::HoverOut() {
  button_->state_ = std::make_unique<ButtonState>(ButtonNeutral(*button_));
}
