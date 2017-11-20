#include <Jumping.h>
#include <Climbing.h>
#include <Idle.h>
#include <walking.h>
#include <swordsManShip.h>
#include <shovelling.h>
#include <hammering.h>

#include <string>

void Jumping::idle(Animation* a)
{
	std::cout << "Jumping -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Jumping::climbing(Animation* a)
{
	std::cout << "Jumping -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Jumping::hammering(Animation * a)
{
	std::cout << "Jumping -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}

void Jumping::shovelling(Animation * a)
{
	std::cout << "Jumping -> Shovelling" << std::endl;
	a->setCurrent(new Shovelling());
	delete this;
}

void Jumping::swordsManShip(Animation * a)
{
	std::cout << "Jumping -> SwordsManShip" << std::endl;
	a->setCurrent(new SwordsManShip());
	delete this;
}

void Jumping::walking(Animation * a)
{
	std::cout << "Jumping -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}
