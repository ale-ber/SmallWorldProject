#pragma once
#include "SpecialPower.h"

class Berserk : public SpecialPower {
public:
	Berserk();
	~Berserk();

	//inherited pure virtual function from SpecialPower
	std::string getPowerType()
	{
		return "Berserk";
	}
};