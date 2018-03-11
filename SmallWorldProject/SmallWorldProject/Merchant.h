#pragma once
#include "SpecialPower.h"

class Merchant : public SpecialPower {
public:
	Merchant();
	~Merchant();

	//inherited pure virtual function from SpecialPower
	std::string getPowerType()
	{
		return "Merchant";
	}
};