#pragma once
#include "SpecialPower.h"

class Hill : public SpecialPower {
public:
	Hill();
	~Hill();

	//inherited pure virtual function from SpecialPower
	std::string getPowerType()
	{
		return "Hill";
	}
};