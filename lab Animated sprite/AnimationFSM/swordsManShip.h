#ifndef SWORDSMANSHIP
#define SWORDSMANSHIP
#include "State.h"

class SwordsManShip : public State
{
public:
	SwordsManShip();
	~SwordsManShip();
	void idle(Animation* a);
	void climbing(Animation* a);
	void shovelling(Animation* a);
	void jumping(Animation* a);
	void walking(Animation* a);
	void hammering(Animation* a);
};
#endif // !SWORDSMANSHIP

