#pragma once
#include "RaceBanner.h"

class Amazon : public RaceBanner {
	public:
		Amazon();
		~Amazon();

		//inherited pure virtual function from RaceBanner
		std::string getRaceType()
		{
			return "Amazon";
		}
};