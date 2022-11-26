#include <iostream>

using namespace std;

struct Time
{
	int hours, minutes, seconds;

	void setHours(int h) {
		hours = h;
	}
	void setMinutes(int m) {
		minutes = m;
	}
	void setSeconds(int s) {
		seconds = s;
	}

	void enter() {
		int h, m, s;
		cout << "Enter hours in this time structure: ";
		cin >> h;
		setHours(h);
		cout << "Enter minutes in this time structure: ";
		cin >> m;
		setMinutes(m);
		cout << "Enter seconds in this time structure: ";
		cin >> s;
		setSeconds(s);
	}

	int getTimeInSeconds() {
		return hours * 60 * 60 + minutes * 60 + seconds;
	}

	Time minus(Time t2) {
		Time time;
		
		int secs = getTimeInSeconds() - t2.getTimeInSeconds();

		time.setHours(secs / 3600);
		time.setMinutes(secs / 60 % 60);
		time.setSeconds(secs % 60);

		return time;
	}

	Time plus(Time t2) {
		Time time;

		int secs = getTimeInSeconds() + t2.getTimeInSeconds();

		time.setHours(secs / 3600);
		time.setMinutes(secs / 60 % 60);
		time.setSeconds(secs % 60);

		return time;
	}
};

int main() {
	Time time1, time2;
	cout << "Enter time1:\n";
	time1.enter();
	cout << "Enter time2:\n";
	time2.enter();

	cout << "time1 in seconds: " << time1.getTimeInSeconds() << '\n';
	cout << "time2 in seconds: " << time2.getTimeInSeconds() << '\n';
	cout << "time1 minus time2 in seconds: " << time1.minus(time2).getTimeInSeconds() << '\n';
	cout << "time1 plus time2 in seconds: " << time1.plus(time2).getTimeInSeconds() << '\n';

	return 0;
}