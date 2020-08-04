#pragma once
class ButtonState {
public:
  ButtonState();
  virtual ~ButtonState();
  virtual void OnHover() = 0;
  virtual void OnClick() = 0;
  virtual void HoverOut() = 0;
};
