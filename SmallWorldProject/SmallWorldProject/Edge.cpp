#include "Edge.h"

Edge::Edge()
{

}

Edge::Edge(int in_borderRegion1, int in_borderRegion2):
	m_borderRegion1(in_borderRegion1),
	m_borderRegion2(in_borderRegion2)
{
}

Edge::~Edge()
{

}

int Edge::getBorder1()
{
	return m_borderRegion1;
}

int Edge::getBorder2()
{
	return m_borderRegion2;
}