#pragma once
#include "SpecialPower.h"

class Diplomat : public SpecialPower {
public:
	Diplomat();
	~Diplomat();

	//inherited pure virtual function from SpecialPower
	std::string getPowerType()
	{
		return "Diplomat";
	}
};