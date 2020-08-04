#pragma once
#include "buttonstate.h"
#include "command.h"
#include "buttonclicked.h"

class Button
{
private:
	ButtonState* state_;
	Command* command_;
	char name;

public:
	Button(char name, Command* command);
	void ChangeButtonState(ButtonState* newstate);

};

