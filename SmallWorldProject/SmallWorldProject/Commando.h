#pragma once
#include "SpecialPower.h"

class Commando : public SpecialPower {
public:
	Commando();
	~Commando();

	//inherited pure virtual function from SpecialPower
	std::string getPowerType()
	{
		return "Commando";
	}
};