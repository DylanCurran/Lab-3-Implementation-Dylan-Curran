#include <hammering.h>
#include <walking.h>
#include <swordsManShip.h>
#include <shovelling.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Idle.h>

Hammering::Hammering()
{
}

Hammering::~Hammering()
{
}

void Hammering::idle(Animation * a)
{
	std::cout << "Hammering -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Hammering::jumping(Animation * a)
{
	std::cout << "Hammering -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Hammering::climbing(Animation * a)
{
	std::cout << "Hammering -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Hammering::walking(Animation * a)
{
	std::cout << "Hammering -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Hammering::shovelling(Animation * a)
{
	std::cout << "Hammering -> Shovelling" << std::endl;
	a->setCurrent(new Shovelling());
	delete this;
}

void Hammering::swordsManShip(Animation * a)
{
	std::cout << "Hammering -> swordsManShip" << std::endl;
	a->setCurrent(new SwordsManShip());
	delete this;
}
