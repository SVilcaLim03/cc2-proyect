#include "button.h"

Button::Button(char label, Command* command)
{
	ButtonState* state[2];
	state[0] = new ButtonClicked(nullptr);

}

void Button::ChangeButtonState(ButtonState* newstate)
{

}
