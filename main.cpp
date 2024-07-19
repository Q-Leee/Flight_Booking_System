#include <iostream>
#include "Console.h"
#include "Booking.h"
#include "Schedule.h"
#include "Seat.h"

using namespace std;

int main() {

	cout << "*** Welcome to Hansung Airline ***" << endl << endl;
	Booking* b = new Booking;
	b->show();
	delete b;


	return 0;
}