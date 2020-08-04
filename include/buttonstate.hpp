#pragma once

class ButtonState
{
protected:
	ButtonState();
	virtual ~ButtonState();
	virtual void Enter()=0;
	virtual void Exit()=0;
};

