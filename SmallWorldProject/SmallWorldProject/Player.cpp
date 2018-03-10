#include "Player.h"
#include "ReinforcementDie.h"

Player::Player(int in_playerNumber):
	m_playerNumber(in_playerNumber)
{
	victoryCoins = 5;
}

Player::~Player()
{

}

int Player::getPlayerNumber()
{
	return m_playerNumber;
}

int Player::getVictoryCoins()
{
	return victoryCoins;
}

void Player::setVictoryCoins(int num)
{
	victoryCoins = victoryCoins + num;
}

ReinforcementDie Player::getReinforcementDie()
{
	return reinforcementDie;
}

void Player::picks_race(std::string in_raceChosen)
{
	
}

void Player::conquers()
{

}

void Player::scores()
{

}