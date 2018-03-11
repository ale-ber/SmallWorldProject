#pragma once
#include "SpecialPower.h"

class Stout : public SpecialPower {
public:
	Stout();
	~Stout();

	//inherited pure virtual function from SpecialPower
	std::string getPowerType()
	{
		return "Stout";
	}
};