#pragma once
#include "SpecialPower.h"

class DragonMaster : public SpecialPower {
public:
	DragonMaster();
	~DragonMaster();

	//inherited pure virtual function from SpecialPower
	std::string getPowerType()
	{
		return "Dragon Master";
	}
};