#pragma once
#include "SpecialPower.h"

class Wealthy : public SpecialPower 
{
public:
	Wealthy();
	~Wealthy();

	//inherited pure virtual function from SpecialPower
	std::string getPowerType()
	{
		return "Wealthy";
	}
};