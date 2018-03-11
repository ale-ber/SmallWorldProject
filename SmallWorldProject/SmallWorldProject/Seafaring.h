#pragma once
#include "SpecialPower.h"

class Seafaring : public SpecialPower {
public:
	Seafaring();
	~Seafaring();

	//inherited pure virtual function from SpecialPower
	std::string getPowerType()
	{
		return "Seafaring";
	}
};