#ifndef ANIMATION_H
#define ANIMATION_H
#include <AnimatedSprite.h>

class Animation
{

	// Please review very good article on Stackoverflow
	// which covers some solutions to circular dependacies
	// https://stackoverflow.com/questions/625799/resolve-build-errors-due-to-circular-dependency-amongst-classes

private:
	AnimatedSprite m_animatableSprite;
	class State* m_current; // note order of m_current is 
							// prior to setCurrent
	class State* m_previous;
public:
	Animation();
	~Animation();
	void setCurrent(State* s);
	void setPrevious(State* s);
	State* getCurrent();
	State* getPrevious();
	
	void idle();
	void jumping();
	void climbing();
	void hammering();
	void shovelling();
	void swordsManShip();
	void walking();

// Try uncommenting and comment the declaration above
//private:
//	class State* m_current;
};

#endif // !ANIMATION_H
