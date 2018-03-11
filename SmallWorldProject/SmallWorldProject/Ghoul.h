#pragma once
#include "RaceBanner.h"

class Ghoul : public RaceBanner {
public:
	Ghoul();
	~Ghoul();

	//inherited pure virtual function from RaceBanner
	std::string getRaceType()
	{
		return "Ghoul";
	}
};