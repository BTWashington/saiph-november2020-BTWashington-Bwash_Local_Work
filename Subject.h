#pragma once
#include "AbstractState.h"
#include "stdafx.h"
class Subject
{
public:
	virtual void SubjectType()=0 {};
	virtual void Attach() = 0;
	virtual void Detach() = 0;
	virtual void NotifyObservers() = 0;
};

