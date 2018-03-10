#include "MapLoader.h"

MapLoader::MapLoader()
{

}

MapLoader::MapLoader(std::string in_fileName):
	m_fileName(in_fileName)
{
	//attempts to open a text file
	mapFile.open(m_fileName);
}

MapLoader::~MapLoader()
{
	mapFile.close();
}

Map MapLoader::generateMap()
{
	Map map;

	//If simply opening the map is successful, alert the user. If not, let them know that the map had an invalid file name
	if (mapFile.is_open())
		std::cout << "File is open" << std::endl;
	else
		throw ("Couldn't open file, invalid file name. \n");

	//A string value that holds one line in the text file at a time
	std::string currentLine;

	//loop until the end of the file
	while (!mapFile.eof())
	{
		//read in a line from the file
		getline(mapFile, currentLine);
		std::istringstream currentLineStream(currentLine);
		
		//The first value should be an integer denoting the region's unique number
		int regionNumber;
		currentLineStream >> regionNumber;
		//If the typecasting fails, then the text file does not have valid map information
		if (currentLineStream.fail())
			throw ("Could not process region number. The map file contains invalid information.");

		std::string regionType;
		currentLineStream >> regionType;
		//check if the region's terrain is a valid type for Small World
		if (regionType != "Farmlands" && regionType != "Forests" && regionType != "Hills" && regionType != "Swamps" && regionType != "Mountains" && regionType != "SeasAndLakes")
			throw ("Could not process region terrain. The map file contains invalid information.");

		std::string regionBonus;
		currentLineStream >> regionBonus;
		//check if the region's bonus is valid
		if (regionBonus != "Cavern" && regionBonus != "Magic" && regionBonus != "Mine" && regionBonus != "none")
			throw ("Could not process the region's bonus. The map file contains invalid information.");
		
		bool hasLostTribe;
		std::string lostTribeInput;
		currentLineStream >> lostTribeInput;
		//check if the presence of a lost tribe is valid
		if (lostTribeInput == "lost")
			hasLostTribe = true;
		else if (lostTribeInput == "none")
			hasLostTribe = false;
		else
			throw ("Could not process the presence of a lost tribe. The map file contains invalud information");

		map.addRegion(regionNumber, regionType, regionBonus, hasLostTribe);

		int currentBorder;
		//keep checking to see if it's the end of line
		while (currentLineStream.peek() != -1)
		{
			currentLineStream >> currentBorder;
			//If the typecasting fails, then the text file does not have valid map information about bordering regions
			if (currentLineStream.fail())
				throw ("Could not process neighbouring region. The map file contains invalid information.");
			map.addEdge(regionNumber, currentBorder);
		}

	}
	//return the newly populated map
	return map;
}