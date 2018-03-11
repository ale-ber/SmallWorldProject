#pragma once
#include "SpecialPower.h"

class Fortified : public SpecialPower {
public:
	Fortified();
	~Fortified();

	//inherited pure virtual function from SpecialPower
	std::string getPowerType()
	{
		return "Fortified";
	}
};