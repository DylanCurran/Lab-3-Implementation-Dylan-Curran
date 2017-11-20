#include <walking.h>
#include <swordsManShip.h>
#include <shovelling.h>
#include <hammering.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Idle.h>

void Walking::idle(Animation * a)
{
	std::cout << "Walking -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Walking::hammering(Animation * a)
{
	std::cout << "Walking -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}

void Walking::shovelling(Animation * a)
{
	std::cout << "Walking -> Shovelling" << std::endl;
	a->setCurrent(new Shovelling());
	delete this;
}

void Walking::swordsManShip(Animation * a)
{
	std::cout << "Walking -> SwordsManShip" << std::endl;
	a->setCurrent(new SwordsManShip());
	delete this;
}

void Walking::jumping(Animation * a)
{
	std::cout << "Walking -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Walking::climbing(Animation * a)
{
	std::cout << "Walking -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
