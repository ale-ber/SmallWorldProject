#pragma once
#include "SpecialPower.h"

class Underworld : public SpecialPower {
public:
	Underworld();
	~Underworld();

	//inherited pure virtual function from SpecialPower
	std::string getPowerType()
	{
		return "Underworld";
	}
};