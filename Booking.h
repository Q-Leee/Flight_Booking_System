#pragma once
#include <iostream>
#include <string>
#include "Console.h"
#include "Schedule.h"
#include "Seat.h"

using namespace std;

class Booking
{
	Schedule* s;

public:
	Booking();
	~Booking();
	void show();
};