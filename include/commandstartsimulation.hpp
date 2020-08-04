#pragma once
#include "command.h"

class CommandStartSimulation : public Command
{
public:
	CommandStartSimulation();
	void Execute();

};