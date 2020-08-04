#include "buttonclicked.h"

ButtonClicked::ButtonClicked(Command* command):command_(command){}

void ButtonClicked::Enter()
{
	command_->Execute();
}

void ButtonClicked::Exit(){}