#include "Seat.h"

Seat::Seat()
{
	this->seat = 0;
	this->name = "----";
}

void Seat::setName(string name)
{
	this->name = name;
}

string Seat::getName()
{
	return name;
}
