#pragma once
#include <string>

/*
Special Power class

Used solely as an abstract class to be inherited from. All of the 20 possible special powers in the game
will inherit this class and its methods.
*/

class SpecialPower {
public:
	SpecialPower();
	virtual ~SpecialPower();
	//returns the number of race tokens a special power initially provides the player
	int getRaceTokens();
	//checks to see if the power is active or not
	bool isActive();
	//sets the power to be inactive
	void setInactive();
	//returns the type of the power
	virtual std::string getPowerType() = 0;
protected:
	//every derived class will set the number of race tokens given to the player when they choose that special power
	int raceTokens;
	/*set to false if the power is inactive. Since some races still move about the map even when in decline, we want 
		to make sure they don't continue getting the benefits of their power. Initially starts as true
		since a special power object that is created is obviously not immediately inactive */
	bool active = true;
};