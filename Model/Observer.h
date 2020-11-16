#pragma once
class Observer
{
	
public:
	enum ObserverEvent { ACTIVATE, SUBJECT_DEATH };
	virtual void Notification(ObserverEvent obsEvt)=0;

};

