#pragma once
#include "Room.h"
class RectRoom :
	public Room
{
public:
	RectRoom();
	RectRoom(double x, double y, double width, double height);
	double getWidth() const;
	double getHeight() const;
	virtual double getSquare() const override;
	~RectRoom();
private:
	double x, y, width, height;
};

