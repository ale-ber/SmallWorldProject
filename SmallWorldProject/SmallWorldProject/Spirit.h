#pragma once
#include "SpecialPower.h"

class Spirit : public SpecialPower {
public:
	Spirit();
	~Spirit();

	//inherited pure virtual function from SpecialPower
	std::string getPowerType()
	{
		return "Spirit";
	}
};