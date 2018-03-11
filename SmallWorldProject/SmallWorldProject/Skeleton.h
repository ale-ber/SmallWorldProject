#pragma once
#include "RaceBanner.h"

class Skeleton : public RaceBanner {
public:
	Skeleton();
	~Skeleton();

	//inherited pure virtual function from RaceBanner
	std::string getRaceType()
	{
		return "Skeleton";
	}
};