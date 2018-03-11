#pragma once
#include "RaceBanner.h"

class Dwarf : public RaceBanner {
public:
	Dwarf();
	~Dwarf();

	//inherited pure virtual function from RaceBanner
	std::string getRaceType()
	{
		return "Dwarf";
	}
};