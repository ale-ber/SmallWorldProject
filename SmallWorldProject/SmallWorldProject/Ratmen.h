#pragma once
#include "RaceBanner.h"

class Ratmen : public RaceBanner {
public:
	Ratmen();
	~Ratmen();

	//inherited pure virtual function from RaceBanner
	std::string getRaceType()
	{
		return "Ratmen";
	}
};