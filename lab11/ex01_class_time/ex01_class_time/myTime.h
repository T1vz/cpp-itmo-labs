#pragma once /* Защита от двойного подключения заголовочного файла */

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
	// operators
	Time operator-(Time);
	friend Time operator+(const Time&, const Time&);
	friend Time operator+(const Time&, const float&);
	friend Time operator+(const float&, const Time&);
	bool operator<(Time);
	bool operator>(Time);
	bool operator==(Time);
private:
	int hours, minutes, seconds;
};