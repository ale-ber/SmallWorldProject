#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Map.h"

class MapLoader 
{
	public:
		MapLoader();
		//constructor that accepts the file name
		MapLoader(std::string fileName);
		~MapLoader();

		//function that reads a text file and creates (and returns) a map object based on its contents
		Map generateMap();
	private:
		//input stream variable for the map file
		std::ifstream mapFile;
		//the name of the map file
		std::string m_fileName;
};