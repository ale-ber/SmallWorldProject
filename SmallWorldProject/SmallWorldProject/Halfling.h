#pragma once
#include "RaceBanner.h"

class Halfling : public RaceBanner {
public:
	Halfling();
	~Halfling();

	//inherited pure virtual function from RaceBanner
	std::string getRaceType()
	{
		return "Halfling";
	}
};