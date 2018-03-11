#include "Map.h"
#include "MapLoader.h"
#include "ReinforcementDie.h"
#include "Player.h"
#include "Races.h"
#include "SpecialPowers.h"
#include "GamePieces.h"
#include <time.h>
#include <iostream>
#include <string>

//the vector of players
std::vector<Player> players;
//vectors of races
std::vector<RaceBanner*> races;
std::vector<RaceBanner*> shuffledRaces;
std::vector<RaceBanner*> availableRaceChoices;
//vectors of special powers
std::vector<SpecialPower*> specialPowers;
std::vector<SpecialPower*> shuffledSpecialPowers;
std::vector<SpecialPower*> availablePowerChoices;

//A method that creates new player objects at the beginning of the game depending on the number of players
void createPlayers(int numOfPlayers)
{
	for (int i = 0; i < numOfPlayers; i++)
		players.push_back(Player(i + 1));
}

//A method that returns the number of turns of a game depending on the number of players
int getNumberOfAllowedTurns(int players)
{
	if (players == 2 || players == 3)
		return 10;
	else if (players == 4)
		return 9;
	else
		return 8;
}

//method used for creating the Race badges
void populateRacesVector()
{
	RaceBanner *amazon = new Amazon();
	races.push_back(amazon);
	RaceBanner *dwarf = new Dwarf();
	races.push_back(dwarf);
	RaceBanner *elf = new Elf();
	races.push_back(elf);
	RaceBanner *ghoul = new Ghoul();
	races.push_back(ghoul);
	RaceBanner *ratmen = new Ratmen();
	races.push_back(ratmen);
	RaceBanner *skeleton = new Skeleton();
	races.push_back(skeleton);
	RaceBanner *sorcerer = new Sorcerer();
	races.push_back(sorcerer);
	RaceBanner *triton = new Triton();
	races.push_back(triton);
	RaceBanner *giant = new Giant();
	races.push_back(giant);
	RaceBanner *halfling = new Halfling();
	races.push_back(halfling);
	RaceBanner *human = new Human();
	races.push_back(human);
	RaceBanner *orc = new Orc();
	races.push_back(orc);
	RaceBanner *troll = new Troll();
	races.push_back(troll);
	RaceBanner *wizard = new Wizard();
	races.push_back(wizard);
}

//method used for creating the Special Powers badges
void populateSpecialPowersVector()
{
	SpecialPower *alchemist = new Alchemist();
	specialPowers.push_back(alchemist);
	SpecialPower *berserk = new Berserk();
	specialPowers.push_back(berserk);
	SpecialPower *bivouacking = new Bivouacking();
	specialPowers.push_back(bivouacking);
	SpecialPower *commando = new Commando();
	specialPowers.push_back(commando);
	SpecialPower *diplomat = new Diplomat();
	specialPowers.push_back(diplomat);
	SpecialPower *dragonMaster = new DragonMaster();
	specialPowers.push_back(dragonMaster);
	SpecialPower *flying = new Flying();
	specialPowers.push_back(flying);
	SpecialPower *forest = new Forest();
	specialPowers.push_back(forest);
	SpecialPower *fortified = new Fortified();
	specialPowers.push_back(fortified);
	SpecialPower *heroic = new Heroic();
	specialPowers.push_back(heroic);
	SpecialPower *hill = new Hill();
	specialPowers.push_back(hill);
	SpecialPower *merchant = new Merchant();
	specialPowers.push_back(merchant);
	SpecialPower *mounted = new Mounted();
	specialPowers.push_back(mounted);
	SpecialPower *pillaging = new Pillaging();
	specialPowers.push_back(pillaging);
	SpecialPower *seafaring = new Seafaring();
	specialPowers.push_back(seafaring);
	SpecialPower *spirit = new Spirit();
	specialPowers.push_back(spirit);
	SpecialPower *stout = new Stout();
	specialPowers.push_back(stout);
	SpecialPower *swamp = new Swamp();
	specialPowers.push_back(swamp);
	SpecialPower *underworld = new Underworld();
	specialPowers.push_back(underworld);
	SpecialPower *wealthy = new Wealthy();
	specialPowers.push_back(wealthy);
}

//method used for shuffling the Races vector
void shuffleRacesVector()
{
	//the shuffle index
	int index;

	//There are 14 races in the game, so the loop executes 14 times
	for (int i = 0; i < 14; i++)
	{
		srand(time(NULL));
		index = rand() % races.size();
		shuffledRaces.push_back(races[index]);
		races.erase(races.begin() + index);
	}
}

//method used for shuffling the Special Powers vector
void shufflePowersVector()
{
	//the shuffle index
	int index;

	//There are 20 powers in the game, so the loop executes 20 times
	for (int i = 0; i < 20; i++)
	{
		srand(time(NULL));
		index = rand() % specialPowers.size();
		shuffledSpecialPowers.push_back(specialPowers[index]);
		specialPowers.erase(specialPowers.begin() + index);
	}
}

//Adds another race to the list of 6 visible badges
void getNextAvailableRace()
{
	availableRaceChoices.push_back(shuffledRaces[0]);
	shuffledRaces.erase(shuffledRaces.begin() + 0);
}

//Adds another special power to the list of 6 visible badges
void getNextAvailablePower()
{
	availablePowerChoices.push_back(shuffledSpecialPowers[0]);
	shuffledSpecialPowers.erase(shuffledSpecialPowers.begin() + 0);
}

//returns the next player to have their turn
int getNextPlayer(int currentPlayer, int maxPlayers)
{
	if (currentPlayer == maxPlayers)
		return 1;
	else
		return (currentPlayer + 1);
}

/*
The main method that implements all the drivers

Each part is seperated by comments
*/

int main() 
{
	std::string fileName;
	int numOfPlayers;
	int startingPlayer;

	/**
	PART 1 HERE
	Loads a map file depending on input from the user, and creates players depending on the number of players entered
	*/
	std::cout << "Part 1 outputs here:" << std::endl;

	std::cout << "Please entre the name of the map file: " << std::endl;
	std::cin >> fileName;
	
	//checking that the user enters a valid number of players
	std::cout << "Please enter the number of players: " << std::endl;
	std::cin >> numOfPlayers;
	while (std::cin.fail() || numOfPlayers < 2 || numOfPlayers > 5) {
		std::cout << "You did not enter a valid integer between 2 and 5. Please enter a valid integer:" << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> numOfPlayers;
	}

	//determine the number of turns depending on the number of players
	const int numberOfTurns = getNumberOfAllowedTurns(numOfPlayers);
	
	//create all the players
	createPlayers(numOfPlayers);

	//try opening the file containing the information for our map. If the map is invalid, do not start game
	MapLoader mapLoader(fileName);
	try 
	{
		Map gameMap = mapLoader.generateMap(); 
	}
	catch (char * str)
	{
		std::cout << str << std::endl;
		//system("pause");
		//return 1;
	}

	//Time to start the game!
	int currentTurn = 1;
	int currentPlayer;

	/**
	PART 2 HERE
	Outputs all of the players created in order
	*/
	std::cout << "Part 2 outputs here:" << std::endl;
	for (int i = 0; i < numOfPlayers; i++)
		std::cout << "Player number: " << players[i].getPlayerNumber() << " successfully created with " << players[i].getVictoryCoins() << " coins." << std::endl;
	
	//get the stacks of badges ready
	populateRacesVector();
	populateSpecialPowersVector();

	//shuffle the stacks of Race and Special Power badges
	shuffleRacesVector();
	shufflePowersVector();

	//initialize the first six choices of Race/Special Power combos
	for (int i = 0; i < 6; i++) {
		getNextAvailableRace();
		getNextAvailablePower();
	}

	/**
	PART 3 HERE
	Outputs all of the available Race/Power combos to choose from
	*/
	std::cout << "Part 3 outputs here:" << std::endl;
	for (int i = 0; i < availableRaceChoices.size(); i++)
		std::cout << "Choice #" << (i+1) << " is a " << availableRaceChoices[i]->getRaceType() << " and " << availablePowerChoices[i]->getPowerType() << " combo." << std::endl;

	//determine the starting player
	std::cout << "The player with the pointiest ears starts first. Which player is that? " << std::endl;
	std::cin >> startingPlayer;
	while (std::cin.fail() || startingPlayer < 1 || startingPlayer > numOfPlayers) {
		std::cout << "You did not enter a valid player. Please enter a valid player number to begin:" << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> startingPlayer;
	}
	currentPlayer = startingPlayer;

	//Everything is set up, start game

	/* MAIN GAME LOOP */
	while (currentTurn <= numberOfTurns)
	{
		std::cout << "Starting turn #" << currentTurn << " out of " << numberOfTurns << " total turns." << std::endl;
		
		//if it is the first turn, players must choose a race and power combo
		if (currentTurn == 1)
		{
			std::cout << "Player #" << currentPlayer << ", please choose a race and power combo: " << std::endl;
			players[currentPlayer-1].picks_race("Test race");
		}

		std::cout << "Player #" << currentPlayer << ", you have two choices. Enter 1 to conquer some regions or 2 to set your race in decline and score for your turn:" << std::endl;
		//verify the user input
		int choice;
		std::cin >> choice;
		while (std::cin.fail() || (choice != 1 && choice != 2))
		{
			std::cout << "You did not enter a valid integer between 1 and 2. Please enter a valid integer to continue the game:" << std::endl;
			std::cin.clear();
			std::cin.ignore(256, '\n');
			std::cin >> choice;
		}

		//depending on the input, call the appropriate methods
		if (choice == 1)
			players[currentPlayer - 1].conquers();
		else
			players[currentPlayer - 1].scores();

		//end the turn
		std::cout << "End of Player# " << currentPlayer << " turn." << std::endl;

		//check if the next loop is the beginning of a new turn
		if (currentPlayer == startingPlayer)
			currentTurn++;

		//hand the next turn over to the next player in line
		currentPlayer = getNextPlayer(currentPlayer, numOfPlayers);
		std::cout << "Beggining of Player# " << currentPlayer << " turn." << std::endl;
	}

	system("pause");

	return 0;
}