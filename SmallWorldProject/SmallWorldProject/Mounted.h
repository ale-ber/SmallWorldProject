#pragma once
#include "SpecialPower.h"

class Mounted : public SpecialPower {
public:
	Mounted();
	~Mounted();

	//inherited pure virtual function from SpecialPower
	std::string getPowerType()
	{
		return "Mounted";
	}
};