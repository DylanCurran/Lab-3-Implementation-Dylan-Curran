#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <typeinfo>

#include <Input.h>
#include <Animation.h>
#include <Debug.h>

class State
{
public:
	virtual void handleInput() {}

	virtual void update() {}

	virtual void idle(Animation* a)
	{
		DEBUG_MSG("State::Idling");
	}
	virtual void jumping(Animation* a)
	{
		DEBUG_MSG("State::Jumping");
	}
	virtual void climbing(Animation* a)
	{
		DEBUG_MSG("State::Climbing");
	}
	virtual void hammering(Animation* a)
	{
		DEBUG_MSG("State::Hammering");
	}
	virtual void shovelling(Animation* a)
	{
		DEBUG_MSG("State::Shovelling");
	}
	virtual void swordsManShip(Animation* a)
	{
		DEBUG_MSG("State::SwordsManShip");
	}
	virtual void walking(Animation* a)
	{
		DEBUG_MSG("State::Walking");
	}
};

#endif // ! ANIMATION_H

