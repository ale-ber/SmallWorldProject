#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "ReinforcementDie.h"
#include "RaceBanner.h"
#include "SpecialPower.h"

class Player {
	public:
		Player(int playerNumber);
		~Player();
		//returns the dice owned by the player
		ReinforcementDie getReinforcementDie();
		//returns the player's unique identifier
		int getPlayerNumber();
		//returns the victory coins the player owns
		int getVictoryCoins();
		//changes the amount of victory coins the player owns
		void setVictoryCoins(int num);
		//returns the race owned by the player
		std::string getRaceOwned();
		//sets the new race selected by the player
		void setRaceOwned(std::string raceChosen);
		//returns the special power owned by the player
		std::string getPowerOwned();
		//sets the new special power selected by the player
		void setPowerOwned(std::string powerChosen);
		//allows the player to select a race out of the 6 available
		void picks_race(std::string race);
		//will be called when a player decides to conquer a region
		void conquers();
		//will be called when a player chooses to end their turn and score. It will eventually return an int
		//corresponding to the number of victory coins gained at the end of their turn
		void scores();
	
	private:
		//a unique player identifier
		int m_playerNumber;
		//an array containing all the regions owned by this player
		std::vector<int> regionsOwned;
		//the current race that the player owns
		std::string raceOwned;
		//the current special power that the player owns
		std::string specialPowerOwned;
		ReinforcementDie reinforcementDie;
		int victoryCoins;
};