#ifndef WALKING
#define WALKING
#include "State.h"

class Walking : public State
{

public:
	void idle(Animation* a);
	void hammering(Animation* a);
	void shovelling(Animation* a);
	void swordsManShip(Animation* a);
	void jumping(Animation* a);
	void climbing(Animation* a);
};

#endif // !WALKING

