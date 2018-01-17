#include "House.h"



House::House()
{
}

void House::addRoom(Room *room)
{
	rooms.push_back(room);
}

void House::deleteRoom(int index)
{
	if (index > 0 && index < getRoomCount())
	{
		rooms.erase(rooms.begin() + index);
	}
}

size_t House::getRoomCount() const
{
	return rooms.size();
}

bool House::isEmpty() const
{
	return rooms.empty();
}

double House::getSummurySquare() const
{
	double result = 0;
	for (auto &room:rooms)
	{
		result += room->getSquare();
	}
	return result;
}

void House::ClearAll()
{
	rooms.clear();
}


House::~House()
{
}
