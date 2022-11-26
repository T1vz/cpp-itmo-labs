#include <iostream>
#include <string>
#include "myTime.h"

using namespace std;

int main() {
	Time* time1 = new Time(10, 89, 91);

	Time* time2 = new Time();
	time2->SetHours(4);
	time2->SetMinutes(61);
	time2->SetSeconds(59);
	
	Time time3;
	
	time3.Sum(*time1, *time2);

	delete time1;
	delete time2;

	time3.Print();
	return 0;
}