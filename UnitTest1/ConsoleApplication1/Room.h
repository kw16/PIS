#pragma once
#include <string>
class Room
{
public:
	/*!
	Constructor of the class
	*/
	Room();
	/*!
	Square Calculating Method
	*/
	virtual double getSquare() const = 0;
	/*!
	Show x coordinate
	*/
	double getX() const;
	/*!
	Show y coordinate
	*/
	double getY() const;
	/*!
	Destructor of the class
	*/
	~Room();
	/*!
	Set room name Method
	\param name room name
	*/
	void setName(std::string name);
	/*!
	Show room name Method
	\return room name
	*/
	std::string getName() const;
protected:
	std::string name;
private:
	double x, y, width, height;
};

