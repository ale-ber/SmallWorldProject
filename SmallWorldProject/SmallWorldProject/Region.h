#pragma once
#include <iostream>
#include <string>

//a list of the different types of region terrains
enum RegionType
{
	Farmlands, Forests, Hills, Swamps, Mountains, SeasAndLakes 
};

enum RegionBonus
{
	Mine, Magic, Cavern, None
};

class Region
{
public:
	Region(int regionNumber, std::string regionType, std::string regionBonus, bool hasLostTribe);
	~Region();

	//assigns the player number as the owner of this region if they have conquered it
	void assignOwner(int owner);
	//returns the number of the player who owns the region. Returns 0 if the region is free
	int ownedByPlayer();
	//returns the region's unique identifier
	int getRegionNumber();
	//returns the type of the region's terrain
	std::string getRegionType();
	//checks to see if this region has a lost tribe on it
	bool hasLostTribe();
	//Sets lostTribe to true if the loaded map has a lost tribe in this region. Sets lostTribe to false once a region with a lost tribe has been conquered
	void setLostTribe(bool set);
	//returns the bonus applied on the region. Returns "none" if there isn't any
	std::string getRegionBonus();

private:
	//the type of the region's terrain
	RegionType m_regionType;
	//The special bonus the region might contain
	RegionBonus m_regionBonus;
	//a unique identifier for a specific region
	int m_regionNumber;
	//the number of the player who currently has this region conquered. If equal to 0, then the region is free
	int m_owner = 0;
	//boolean to see if the region has a lost tribe on it
	bool lostTribe;
};