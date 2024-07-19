#include "Schedule.h"

Schedule::Schedule()
{
	seat = new Seat[8];
}

Schedule::~Schedule()
{
	delete[] seat;
}

void Schedule::show()
{
	for (int i = 0; i < 8; i++)
	{
		cout << "\t" << seat[i].getName();
	}
	cout << endl;
}

void Schedule::setTime(string time)
{
	this->time = time;
}

string Schedule::getTime()
{
	return time;
}

void Schedule::setN(int num, string name)
{
	seat[num - 1].setName(name);
}

string Schedule::getN(int num)
{
	return seat[num - 1].getName();
}
