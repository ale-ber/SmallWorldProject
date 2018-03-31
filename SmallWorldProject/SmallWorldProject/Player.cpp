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

std::string Player::getRaceOwned()
{
	return raceOwned->getRaceType();
}

void Player::setRaceOwned(RaceBanner* raceChosen)
{
	raceOwned = raceChosen;
}

std::string Player::getPowerOwned()
{
	return specialPowerOwned->getPowerType();
}

void Player::setPowerOwned(SpecialPower* powerChosen)
{
	specialPowerOwned = powerChosen;
}

int Player::getTotalConqueredRegions()
{
	return regionsConquered;
}

void Player::Update(int regionsConquered)
{
	this->regionsConquered = regionsConquered;
}

void Player::picks_race(std::string in_raceChosen)
{
	std::cout << "picks_race() method of the Player class called" << std::endl;
}

void Player::conquers()
{
	std::cout << "conquers() method of the Player class called" << std::endl;
}

void Player::scores()
{
	std::cout << "scores() method of the Player class called" << std::endl;
}