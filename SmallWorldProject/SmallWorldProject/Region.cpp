#include "Region.h"

Region::Region(int in_regionNumber, std::string in_regionType, std::string in_regionBonus, bool in_lostTribe) :
	m_regionNumber(in_regionNumber), lostTribe(in_lostTribe)
{
	//process region type
	if (in_regionType == "Farmlands")
		m_regionType = Farmlands;
	else if (in_regionType == "Forests")
		m_regionType = Forests;
	else if (in_regionType == "Hills")
		m_regionType = Hills;
	else if (in_regionType == "Swamps")
		m_regionType = Swamps;
	else if (in_regionType == "Mountains")
		m_regionType = Mountains;
	else if (in_regionType == "SeasAndLakes")
		m_regionType = SeasAndLakes;
	else
		std::cout << "Not a valid Region Type";

	//process region bonus
	if (in_regionBonus == "Mine")
		m_regionBonus = Mine;
	else if (in_regionBonus == "Cavern")
		m_regionBonus = Cavern;
	else if (in_regionBonus == "Magic")
		m_regionBonus = Magic;
	else if (in_regionBonus == "none")
		m_regionBonus = None;
	else
		std::cout << "Not a valid Region Bonus";
}

Region::~Region()
{
}

void Region::assignOwner(int in_owner) 
{
	m_owner = in_owner;
}

int Region::ownedByPlayer()
{
	return m_owner;
}

int Region::getRegionNumber()
{
	return m_regionNumber;
}

std::string Region::getRegionType()
{
	switch (m_regionType)
	{
	case(Farmlands):
		return "Farmlands";
		break;
	case(Forests):
		return "Forests";
		break;
	case(Hills):
		return "Hills";
		break;
	case(Swamps):
		return "Swamps";
		break;
	case(Mountains):
		return "Mountains";
		break;
	case(SeasAndLakes):
		return "Seas And Lakes";
		break;
	default:
		break;
	}
	//Ideally this line would never be executed, but it is included here in order to eliminate a warning
	//from Microsoft Visual Studio
	return "Invalid terrain, the case switch has failed.";
}

bool Region::hasLostTribe()
{
	return lostTribe;
}

void Region::setLostTribe(bool set)
{
	lostTribe = set;
}

std::string Region::getRegionBonus()
{
	switch (m_regionBonus)
	{
	case(Cavern):
		return "Cavern";
		break;
	case(Mine):
		return "Mine";
		break;
	case(Magic):
		return "Magic";
		break;
	case(None):
		return "none";
		break;
	default:
		break;
	}
	//Ideally this line would never be executed, but it is included here in order to eliminate a warning
	//from Microsoft Visual Studio
	return "Invalid bonus, the case switch has failed.";
}