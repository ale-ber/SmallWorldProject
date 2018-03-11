#pragma once
#include "RaceBanner.h"

class Triton : public RaceBanner {
public:
	Triton();
	~Triton();

	//inherited pure virtual function from RaceBanner
	std::string getRaceType()
	{
		return "Triton";
	}
};