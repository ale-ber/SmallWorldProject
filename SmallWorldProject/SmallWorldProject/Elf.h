#pragma once
#include "RaceBanner.h"

class Elf : public RaceBanner {
public:
	Elf();
	~Elf();

	//inherited pure virtual function from RaceBanner
	std::string getRaceType()
	{
		return "Elf";
	}
};