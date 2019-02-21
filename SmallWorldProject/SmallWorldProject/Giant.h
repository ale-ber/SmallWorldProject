#pragma once
#include "RaceBanner.h"

class Giant : public RaceBanner {
public:
	Giant();
	~Giant();

	//inherited pure virtual function from RaceBannerdd
	std::string getRaceType()
	{
		return "Giant";
	}
};