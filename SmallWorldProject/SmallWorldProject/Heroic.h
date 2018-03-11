#pragma once
#include "SpecialPower.h"

class Heroic : public SpecialPower {
public:
	Heroic();
	~Heroic();

	//inherited pure virtual function from SpecialPower
	std::string getPowerType()
	{
		return "Heroic";
	}
};