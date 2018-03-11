#pragma once
#include "SpecialPower.h"

class Swamp : public SpecialPower {
public:
	Swamp();
	~Swamp();

	//inherited pure virtual function from SpecialPower
	std::string getPowerType()
	{
		return "Swamp";
	}
};