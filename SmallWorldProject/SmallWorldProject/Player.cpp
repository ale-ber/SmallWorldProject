#include "Player.h"
#include "ReinforcementDie.h"

Player::Player(int in_playerNumber):
	m_playerNumber(in_playerNumber)
{
	victoryCoins = 5;
	raceOwned = "none";
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
	return raceOwned;
}

void Player::setRaceOwned(std::string raceChosen)
{
	raceOwned = raceChosen;
}

std::string Player::getPowerOwned()
{
	return specialPowerOwned;
}

void Player::setPowerOwned(std::string powerChosen)
{
	specialPowerOwned = powerChosen;
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