#include <shovelling.h>
#include <swordsManShip.h>
#include <hammering.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Idle.h>
#include <walking.h>

Shovelling::Shovelling()
{
}

Shovelling::~Shovelling()
{
}

void Shovelling::idle(Animation * a)
{
	std::cout << "Shovelling-> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Shovelling::hammering(Animation * a)
{
	std::cout << "Shovelling -> hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}

void Shovelling::climbing(Animation * a)
{
	std::cout << "Shovelling -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Shovelling::swordsManShip(Animation * a)
{
	std::cout << "Shovelling -> SwordsManShip" << std::endl;
	a->setCurrent(new SwordsManShip());
	delete this;
}

void Shovelling::jumping(Animation * a)
{
	std::cout << "Shovelling -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Shovelling::walking(Animation * a)
{
	std::cout << "Shovelling -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}
