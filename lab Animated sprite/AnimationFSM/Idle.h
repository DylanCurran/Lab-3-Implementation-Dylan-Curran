#ifndef IDLE_H
#define IDLE_H

#include <State.h>

class Idle : public State
{
public:
	Idle() {};
	~Idle() {};
	void handleInput();
	void update();
	void jumping(Animation* a);
	void climbing(Animation* a);
	void hammering(Animation* a);
	void walking(Animation* a);
	void shovelling(Animation* a);
	void swordsManShip(Animation* a);
};

#endif // !IDLE_H