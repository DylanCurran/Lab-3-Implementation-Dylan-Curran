#ifndef HAMMERING
#define HAMMERING
#include "State.h"

class Hammering : public State
{
public:
	Hammering();
	~Hammering();
	void idle(Animation* a);
	void jumping(Animation* a);
	void climbing(Animation* a);
	void walking(Animation* a);
	void shovelling(Animation* a);
	void swordsManShip(Animation* a);
};
#endif // !HAMMERING