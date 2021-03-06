#ifndef CLIMBING_H
#define CLIMBING_H

#include <State.h>

class Climbing : public State
{
public:
	Climbing() {};
	~Climbing() {};
	void idle(Animation* a);
	void jumping(Animation* a);
	void walking(Animation* a);
	void swordsManShip(Animation* a);
	void shovelling(Animation* a);
	void hammering(Animation* a);
};

#endif // !IDLE_H