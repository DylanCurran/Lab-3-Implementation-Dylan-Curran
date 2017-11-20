#ifndef SHOVELLING
#define SHOVELLING
#include "State.h"
class Shovelling : public State
{
public:
	Shovelling();
	~Shovelling();
	void idle(Animation* a);
	void hammering(Animation* a);
	void climbing(Animation* a);
	void swordsManShip(Animation* a);
	void jumping(Animation* a);
	void walking(Animation* a);
};

#endif // !SHOVELLING

