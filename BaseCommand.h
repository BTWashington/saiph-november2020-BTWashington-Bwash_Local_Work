#pragma once
#include "stdafx.h"
#include "AbstractState.h"


class BaseCommand
{
private:
	// Class members
	Ship* BaseCommandShip = nullptr;
	float _timeDelay = 0.0f;
public:
	// Accessors and mutators
	Ship* GetBaseCommandShip() { return BaseCommandShip; }
	float GetTimeDelay() { return _timeDelay; }
	// pure virtual Execute method
	virtual void Execute() {};

};

