#include <iostream>
#include <string>
#include "myTime.h"
#include "exception.h"

using namespace std;

int main() {
	try
	{
		Time* time1 = new Time(10, 89, 91);
		time1->Print();

		Time* time2 = new Time();
		time2->SetHours(14);
		time2->SetMinutes(61);
		time2->SetSeconds(59);
		time2->Print();

		Time time3;

		time3.Sum(*time1, *time2);

		delete time1;
		delete time2;

		time3.Print();
	}
	catch (Exception& error)
	{
		error.Print();
	}
	return 0;
}