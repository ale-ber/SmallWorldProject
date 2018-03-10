#pragma once
#include <iostream>
#include <string>

class Edge
{
	public:
		Edge();
		Edge(int border1, int border2);
		~Edge();

		//returns the region with the border
		int getBorder1();
		//returns the region that neighbours the region mentioned above
		int getBorder2();
	private:
		int m_borderRegion1;
		int m_borderRegion2;
};