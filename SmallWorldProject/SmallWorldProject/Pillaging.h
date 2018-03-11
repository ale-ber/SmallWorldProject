#pragma once
#include "SpecialPower.h"

class Pillaging : public SpecialPower {
public:
	Pillaging();
	~Pillaging();

	//inherited pure virtual function from SpecialPower
	std::string getPowerType()
	{
		return "Pillaging";
	}
};