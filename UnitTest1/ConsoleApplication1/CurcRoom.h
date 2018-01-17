#pragma once
#include "Room.h"
class CurcRoom :
	public Room
{
public:
	CurcRoom();
	CurcRoom(double x, double y, double radius);
	double getRadius() const;
	virtual double getSquare() const override;
	~CurcRoom();
private:
	double x, y, radius;
};

