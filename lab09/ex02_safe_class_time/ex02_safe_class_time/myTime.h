#pragma once

using namespace std;

class Time
{
public:
	// constructors
	Time();
	Time(int, int, int);
	// setters
	void SetHours(int);
	void SetMinutes(int);
	void SetSeconds(int);
	// getters
	int GetHours() const;
	int GetMinutes() const;
	int GetSeconds() const;
	// methods
	void Print() const;
	void Sum(Time, Time);
private:
	int hours, minutes, seconds;
};