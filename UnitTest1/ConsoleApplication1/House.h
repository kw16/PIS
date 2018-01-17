#pragma once
#include "Room.h"
#include <vector>

class House
{
public:
	House();
	void addRoom(Room *room);
	void deleteRoom(int index);
	size_t getRoomCount() const;
	bool isEmpty() const;
	double getSummurySquare() const;
	void ClearAll();
	~House();
private:
	std::vector<Room*> rooms;
};

