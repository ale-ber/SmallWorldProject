#pragma once
#include <iostream>

class ReinforcementDie
{
public:
	ReinforcementDie();
	~ReinforcementDie();

	//this method rolls the reinforcement die and returns a value between 0 and 3
	int rollDie();

};