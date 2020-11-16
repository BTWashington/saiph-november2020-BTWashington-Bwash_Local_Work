#ifndef STICKYBOMB_H_
#define STICKYBOMB_H_

#include "Bullet.h"
#include "Observer.h"
class Enemy;

class StickyBomb : public Bullet, public Observer
{
	Enemy *target;		
	Vec2f offset;
	bool stuck;

	void Disconnect();
public:
	StickyBomb();
	~StickyBomb();

	// accessors & mutators
	void SetTarget(Enemy *_target);

	// interface methods
	virtual void CollisionResponse();	// stop
	virtual void Heartbeat(float _delta);	// seek or stick
	void Notification(ObserverEvent _state);	// explode
};

#endif