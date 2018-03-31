#include "RaceBanner.h"

RaceBanner::RaceBanner()
{

}

RaceBanner::~RaceBanner()
{

}

int RaceBanner::getRaceTokens()
{
	return raceTokens;
}

void RaceBanner::setRaceTokens(int raceTokens)
{
	this->raceTokens = raceTokens;
}

bool RaceBanner::isInDecline()
{
	return inDecline;
}

void RaceBanner::setInDecline()
{
	inDecline = true;
}