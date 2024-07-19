#pragma once
#include <iostream>
#include <string>

using namespace std;

class Seat
{
	int seat;
	string name;

public:
	Seat();
	void setName(string name);
	string getName();
};