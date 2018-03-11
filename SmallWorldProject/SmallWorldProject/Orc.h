#pragma once
#include "RaceBanner.h"

class Orc : public RaceBanner {
public:
	Orc();
	~Orc();

	//inherited pure virtual function from RaceBanner
	std::string getRaceType()
	{
		return "Orc";
	}
};