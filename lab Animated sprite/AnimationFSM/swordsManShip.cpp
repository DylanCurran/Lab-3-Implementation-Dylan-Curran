#include <swordsManShip.h>
#include <shovelling.h>
#include <Climbing.h>
#include <hammering.h>
#include <Jumping.h>
#include <Idle.h>
#include <walking.h>

SwordsManShip::SwordsManShip()
{

}

SwordsManShip::~SwordsManShip()
{
}

void SwordsManShip::idle(Animation * a)
{
	std::cout << "Sword -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void SwordsManShip::climbing(Animation * a)
{
	std::cout << "Sword -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void SwordsManShip::shovelling(Animation * a)
{
	std::cout << "Sword -> Shovelling" << std::endl;
	a->setCurrent(new Shovelling());
	delete this;
}

void SwordsManShip::jumping(Animation * a)
{
	std::cout << "Sword -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void SwordsManShip::walking(Animation * a)
{
	std::cout << "Sword to Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void SwordsManShip::hammering(Animation * a)
{
	std::cout << "Sword -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}
