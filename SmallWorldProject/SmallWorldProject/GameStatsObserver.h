#pragma once

class GameStatsObserver
{
public:
	virtual void Update(int regionsConquered) = 0;
};