#include "CurcRoom.h"

CurcRoom::CurcRoom()
{
}

CurcRoom::CurcRoom(double x, double y, double radius)
{
	this->x = x;
	this->y = y;
	this->radius = radius;
}

double CurcRoom::getRadius() const
{
	return this->radius;
}

double CurcRoom::getSquare() const
{
	return 3.1415 * this->radius * this->radius;
}

CurcRoom::~CurcRoom()
{
}