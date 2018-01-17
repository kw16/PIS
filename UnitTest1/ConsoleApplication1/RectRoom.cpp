#include "RectRoom.h"



RectRoom::RectRoom()
{
}

RectRoom::RectRoom(double x, double y, double width, double height)
{
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
}

double RectRoom::getWidth() const
{
	return this->width;
}

double RectRoom::getHeight() const
{
	return this->height;
}

double RectRoom::getSquare() const
{
	return this->width * this->height;
}


RectRoom::~RectRoom()
{
}