#include <Climbing.h>
#include <Jumping.h>
#include <walking.h>
#include <hammering.h>
#include <swordsManShip.h>
#include <shovelling.h>
#include <Idle.h>

#include <string>

void Climbing::idle(Animation* a)
{
	std::cout << "Climbing -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Climbing::jumping(Animation* a)
{
	std::cout << "Climbing -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Climbing::walking(Animation * a)
{
	std::cout << "Climbing -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Climbing::swordsManShip(Animation * a)
{
	std::cout << "Climbing -> SwordsManShip" << std::endl;
	a->setCurrent(new SwordsManShip());
	delete this;
}

void Climbing::shovelling(Animation * a)
{
	std::cout << "Climbing -> Shovelling" << std::endl;
	a->setCurrent(new Shovelling());
	delete this;
}

void Climbing::hammering(Animation * a)
{
	std::cout << "Climbing -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}
