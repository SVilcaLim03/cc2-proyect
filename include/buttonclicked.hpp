#pragma once
#include "buttonstate.h"
#include "command.h"

class ButtonClicked : public ButtonState
{
private:
	Command* command_;
	void Enter();
	void Exit();

public:
	ButtonClicked(Command* command);
};

