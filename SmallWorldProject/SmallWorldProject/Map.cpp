#include "Map.h"

Map::Map()
{

}

Map::~Map()
{

}

void Map::addRegion(int regionNumber, std::string regionType, std::string regionBonus, bool hasLostTribe)
{
	regions.push_back(Region(regionNumber, regionType, regionBonus, hasLostTribe));
}

void Map::addEdge(int border1, int border2)
{
	edges.push_back(Edge(border1, border2));
}

Region Map::getRegion(int position)
{
	return regions[position];
}

Edge Map::getEdge(int position)
{
	return edges[position];
}

int Map::numberofRegions()
{
	return regions.size();
}

int Map::numberofEdges()
{
	return edges.size();
}