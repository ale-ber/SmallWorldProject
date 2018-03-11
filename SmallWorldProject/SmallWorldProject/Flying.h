#pragma once
#include "SpecialPower.h"

class Flying : public SpecialPower {
public:
	Flying();
	~Flying();

	//inherited pure virtual function from SpecialPower
	std::string getPowerType()
	{
		return "Flying";
	}
};