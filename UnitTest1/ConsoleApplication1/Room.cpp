#include "Room.h"



Room::Room()
{
}

Room::~Room()
{
}

double Room::getX() const
{
	return this->x;
}

double Room::getY() const
{
	return this->y;
}

void Room::setName(std::string name)
{
	this->name = name;
}

std::string Room::getName() const
{
	return name;
}
