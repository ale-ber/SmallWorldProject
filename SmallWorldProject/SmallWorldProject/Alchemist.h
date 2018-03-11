#pragma once
#include "SpecialPower.h"

class Alchemist : public SpecialPower {
public:
	Alchemist();
	~Alchemist();

	//inherited pure virtual function from SpecialPower
	std::string getPowerType()
	{
		return "Alchemist";
	}
};