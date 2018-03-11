#pragma once
#include "RaceBanner.h"

class Human : public RaceBanner {
public:
	Human();
	~Human();

	//inherited pure virtual function from RaceBanner
	std::string getRaceType()
	{
		return "Human";
	}
};