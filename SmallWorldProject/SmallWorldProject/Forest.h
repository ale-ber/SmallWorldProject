#pragma once
#include "SpecialPower.h"

class Forest : public SpecialPower {
public:
	Forest();
	~Forest();

	//inherited pure virtual function from SpecialPower
	std::string getPowerType()
	{
		return "Forest";
	}
};