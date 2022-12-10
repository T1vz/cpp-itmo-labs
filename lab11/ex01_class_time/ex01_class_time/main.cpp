#include <iostream>
#include <string>
#include "myTime.h"

using namespace std;

int main() {
	Time time1 = Time(10, 89, 91);

	Time time2 = Time();
	time2.SetHours(4);
	time2.SetMinutes(61);
	time2.SetSeconds(59);

	float fTime1 = 5.0163;
	
	Time time3 = time1 + time2;
	Time time4 = fTime1 + time1;
	Time time5 = time1 + fTime1;

	time3.Print();
	time4.Print();
	time5.Print();

	cout << (time3 > time4) << '\n' << (time4 < time3) << '\n' << (time3 < time4) << '\n' << (time4 < time3) << '\n' << (time3 == time4) << '\n' << (time4 == time5);
	return 0;
}