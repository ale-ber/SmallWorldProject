#pragma once
#include "RaceBanner.h"

class Troll : public RaceBanner {
public:
	Troll();
	~Troll();

	//inherited pure virtual function from RaceBanner
	std::string getRaceType()
	{
		return "Troll";
	}
};