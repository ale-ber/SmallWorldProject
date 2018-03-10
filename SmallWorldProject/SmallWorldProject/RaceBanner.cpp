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

bool RaceBanner::isInDecline()
{
	return inDecline;
}

void RaceBanner::setInDecline()
{
	inDecline = true;
}