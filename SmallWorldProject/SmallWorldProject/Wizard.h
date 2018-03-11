#pragma once
#include "RaceBanner.h"

class Wizard : public RaceBanner {
public:
	Wizard();
	~Wizard();

	//inherited pure virtual function from RaceBanner
	std::string getRaceType()
	{
		return "Wizard";
	}
};