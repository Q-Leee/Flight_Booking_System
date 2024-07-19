#include "Console.h"

int Console::show1()
{
	int num = 0;
	cout << "Booking:1, Cancel:2, Preview:3, Exit:4 >> ";
	cin >> num;
	return num;
}

int Console::time()
{
	int num = 0;
	while (true)
	{
		cout << "07am:1, 12pm:2, 17pm:3 >> ";
		cin >> num;
		if (num < 1 || num > 3)
		{
			cout << "Invalid number.. Try again.." << endl;
		}
		else
		{
			break;
		}
	}
	return num;
}



