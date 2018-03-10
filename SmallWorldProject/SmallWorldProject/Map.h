#pragma once
#include <iostream>
#include <vector>

#include "Region.h"
#include "Edge.h"


class Map
{
	public:
		Map();
		~Map();

		//adds a region to the map using a unique region identifier and a terrain type
		void addRegion(int regionNumber, std::string regionType, std::string regionBonus, bool hasLostTribe);
		//adds a border between two neighbouring regions
		void addEdge(int border1, int border2);
		//returns the region at a certain position
		Region getRegion(int position);
		//returns a border
		Edge getEdge(int position);
		//number of regions in a map
		int numberofRegions();
		//number of borders in a map
		int numberofEdges();

	private:
		//an array that contains all the borders in the map
		std::vector<Edge> edges;
		//an array that contains all the regions in a map
		std::vector<Region> regions;
};