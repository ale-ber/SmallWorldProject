#pragma once
#include "RaceBanner.h"

class Sorcerer : public RaceBanner {
public:
	Sorcerer();
	~Sorcerer();

	//inherited pure virtual function from RaceBanner
	std::string getRaceType()
	{
		return "Sorcerer";
	}
};