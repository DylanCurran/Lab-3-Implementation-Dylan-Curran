#include <Animation.h>
#include <Idle.h>

Animation::Animation()
{
	m_current = new Idle();
}

Animation::~Animation() {}

void Animation::setCurrent(State* s)
{
	m_current = s;
}

State* Animation::getCurrent()
{
	return m_current;
}

void Animation::setPrevious(State* s)
{
	m_previous = s;
}

State* Animation::getPrevious()
{
	return m_previous;
}

void Animation::idle()
{
	m_current->idle(this);
	for (int xCoord = 0; xCoord <= 5; xCoord++)
	{
		m_animatableSprite.addFrame(sf::IntRect((xCoord * 85 + 3),3, 84, 84));
	}
	
}

void Animation::jumping()	// is the right arrow and left arrow
{
	m_current->jumping(this);
	for (int yCoord = 1; yCoord <= 5; yCoord++)
	{
		m_animatableSprite.addFrame(sf::IntRect(3,(yCoord * 85 + 3), 84, 84));
	}
	
}

void Animation::climbing()	// is the up arrow
{
	m_current->climbing(this);
	for (int yCoord = 1; yCoord <= 5; yCoord++)
	{
		m_animatableSprite.addFrame(sf::IntRect(88, (yCoord * 85 + 3), 84, 84));
	}
}

void Animation::hammering()
{
	m_current->hammering(this);
	for (int yCoord = 1; yCoord <= 5; yCoord++)
	{
		m_animatableSprite.addFrame(sf::IntRect(173, (yCoord * 85 + 3), 84, 84));
	}
}

void Animation::shovelling()
{
	m_current->shovelling(this);
	for (int yCoord = 1; yCoord <= 5; yCoord++)
	{
		m_animatableSprite.addFrame(sf::IntRect(258, (yCoord * 85 + 3), 84, 84));
	}
}

void Animation::swordsManShip()
{
	m_current->swordsManShip(this);
	for (int yCoord = 1; yCoord <= 5; yCoord++)
	{
		m_animatableSprite.addFrame(sf::IntRect(343, (yCoord * 85 + 3), 84, 84));
	}
}
void Animation::walking()
{
	m_current->walking(this);
	for (int yCoord = 1; yCoord <= 5; yCoord++)
	{
		m_animatableSprite.addFrame(sf::IntRect(428, (yCoord * 85 + 3), 84, 84));
	}
}
