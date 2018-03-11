#pragma once
#include "SpecialPower.h"

class Bivouacking : public SpecialPower {
public:
	Bivouacking();
	~Bivouacking();

	//inherited pure virtual function from SpecialPower
	std::string getPowerType()
	{
		return "Bivouacking";
	}
};