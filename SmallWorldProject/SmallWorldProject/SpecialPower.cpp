#include "SpecialPower.h"

SpecialPower::SpecialPower()
{

}

SpecialPower::~SpecialPower()
{

}

int SpecialPower::getRaceTokens()
{
	return raceTokens;
}

bool SpecialPower::isActive()
{
	return active;
}

void SpecialPower::setInactive()
{
	active = false;
}