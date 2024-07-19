#pragma once
#include <iostream>
#include <string>
#include "Seat.h"
#include "Console.h"

using namespace std;

class Schedule
{
	Seat* seat;
	string time;

public:
	Schedule();
	~Schedule();
	void show();
	void setTime(string time);
	string getTime();
	void setN(int num, string name);
	string getN(int num);
};