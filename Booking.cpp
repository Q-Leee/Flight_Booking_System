#include "Booking.h"

Booking::Booking()
{
	s = new Schedule[3];
	s[0].setTime("07am");
	s[1].setTime("12pm");
	s[2].setTime("17pm");
}

Booking::~Booking()
{
	delete[] s;
}

void Booking::show()
{
	Console c;
	int seatN = 0;
	string name;
	
	while (true)
	{
		int num = c.show1();
		if (num == 1)
		{
			int num1 = c.time();
			if (num1 == 1 || num1 == 2 || num1 == 3)
			{
				cout << s[num1 - 1].getTime() << ": ";
				s[num1-1].show();
				cout << "Seat Number >> ";
				cin >> seatN;
				cout << "Name >> ";
				cin >> name;
				s[num1-1].setN(seatN, name);
				
			}
		}
		else if (num == 2)
		{
			int num1 = c.time();
			if (num1 == 1 || num1 == 2 || num1 == 3)
			{
				cout << s[num1 - 1].getTime() << ": ";
				s[num1 - 1].show();
				cout << "Seat Number >> ";
				cin >> seatN;
				cout << "Name >> ";
				cin >> name;

				if (name != s[num1 - 1].getN(seatN))
				{
					cout << "Does not match with the booked name" << endl;
				}
				else
				{
					s[num1 - 1].setN(seatN, "----");
					cout << "Successfully canceled" << endl;
				}
			}
		}
		else if (num == 3)
		{
			for (int i = 0; i < 3; i++)
			{
				cout << s[i].getTime() << ": ";
				s[i].show();
			}
		}
		else if (num == 4)
		{
			cout << "Exiting.." << endl;
			break;
		}
		else
		{
			cout << "Invalid number.. Try again.." << endl;
		}
	}
}
