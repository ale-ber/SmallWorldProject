#include "Map.h"
#include "MapLoader.h"
#include "ReinforcementDie.h"
#include "Player.h"
#include "Races.h"
#include "SpecialPowers.h"
#include "GamePieces.h"
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

//method used for shuffling the races in the stack
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

//method used for shuffling the special powers in the stack
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

/*
The main method that implements all the drivers

Each part is seperated by comments
*/

int main() 
{
	std::string fileName;
	int numOfPlayers;
	

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

	//try opening the file containing the information for our test map
	MapLoader mapLoader(fileName);
	try 
	{
		Map gameMap = mapLoader.generateMap(); 
		//once the map is generated, output all the regions and borders in our map
		/*for (int j = 0; j < gameMap.numberofRegions(); j++)
		{
			std::cout << "The region's number is " << gameMap.getRegion(j).getRegionNumber() << " and it's type is " << gameMap.getRegion(j).getRegionType() << "and bonus: " << gameMap.getRegion(j).getRegionBonus() << std::endl;
		}
		for (int j = 0; j < gameMap.numberofEdges(); j++)
		{
			std::cout << "The region's number is " << gameMap.getEdge(j).getBorder1() << " and it borders region# " << gameMap.getEdge(j).getBorder2() << std::endl;
		}*/
	}
	catch (char * str)
	{
		std::cout << str << std::endl;
	}

	int currentTurn = 1;

	/**
	PART 2 HERE
	Outputs all of the players created in order
	*/
	std::cout << "Part 2 outputs here:" << std::endl;
	for (int i = 0; i < numOfPlayers; i++)
		std::cout << "Player number: " << players[i].getPlayerNumber() << " successfully created." << std::endl;
	//populateRacesVector();
	//std::cout << "Works: " << races[5]->getRaceTokens() << std::endl;


	system("pause");

	return 0;
}