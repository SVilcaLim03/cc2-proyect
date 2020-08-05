#include "button_clicked.hpp"
#include "button_hovered.hpp"
#include <memory>
ButtonClicked::ButtonClicked(Button &button) : button_(&button) {
  button_->state_name_ = Button::CLICKED;
  button_->command_->Execute();
}

ButtonClicked::~ButtonClicked() {}

void ButtonClicked::HoverOut() {}

void ButtonClicked::OnClick() {
  button_->state_ = std::make_unique<ButtonClicked>(*button_);
}

void ButtonClicked::OnHover() {
  button_->state_ = std::make_unique<ButtonHovered>(*button_);
}
