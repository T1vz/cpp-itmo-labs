#include <iostream>
#include "myTime.h"

using namespace std;

// constructors
Time::Time()
{
	Time::SetHours(0);
	Time::SetMinutes(0);
	Time::SetSeconds(0);
}
Time::Time(int h, int m, int s)
{
	int secs = h * 60 * 60 + m * 60 + s;
	Time::SetHours(secs / 3600);
	Time::SetMinutes(secs / 60 % 60);
	Time::SetSeconds(secs % 60);
}
// setters
void Time::SetHours(int h) {
	Time::hours = h;
}
void Time::SetMinutes(int m) {
	Time::minutes = m;
}
void Time::SetSeconds(int s) {
	Time::seconds = s;
}
// getters
int Time::GetHours() const {
	return Time::hours;
}
int Time::GetMinutes() const {
	return Time::minutes;
}
int Time::GetSeconds() const {
	return Time::seconds;
}
// methods
void Time::Print() const {
	cout << Time::GetHours() << ":" << Time::GetMinutes() << ":" << GetSeconds() << '\n';
}
void Time::Sum(Time t1, Time t2) {
	int secs = (t1.GetHours() + t2.GetHours()) * 60 * 60 + (t1.GetMinutes() + t2.GetMinutes()) * 60 + t1.GetSeconds() + t2.GetSeconds();
	Time::SetHours(secs / 3600);
	Time::SetMinutes(secs / 60 % 60);
	Time::SetSeconds(secs % 60);
}
// operators
Time operator+(const Time& t1, const Time& t2) {
	Time newTime = Time();
	int secs = (t1.GetHours() + t2.GetHours()) * 60 * 60 + (t1.GetMinutes() + t2.GetMinutes()) * 60 + t1.GetSeconds() + t2.GetSeconds();
	newTime.SetHours(secs / 3600);
	newTime.SetMinutes(secs / 60 % 60);
	newTime.SetSeconds(secs % 60);
	return newTime;
}
Time Time::operator-(Time t2) {
	Time newTime = Time();
	int secs = (this->GetHours() - t2.GetHours()) * 60 * 60 + (this->GetMinutes() - t2.GetMinutes()) * 60 + this->GetSeconds() - t2.GetSeconds();
	newTime.SetHours(secs / 3600);
	newTime.SetMinutes(secs / 60 % 60);
	newTime.SetSeconds(secs % 60);
	return newTime;
}
Time operator+(const Time& t1, const float& floatH) {
	Time fTime = Time();
	int secs = (int)(floatH * 3600);
	fTime.SetHours(secs / 3600);
	fTime.SetMinutes(secs / 60 % 60);
	fTime.SetSeconds(secs % 60);
	return t1 + fTime;
}
Time operator+(const float& floatH, const Time& t1) {
	Time fTime = Time();
	int secs = (int)(floatH * 3600);
	fTime.SetHours(secs / 3600);
	fTime.SetMinutes(secs / 60 % 60);
	fTime.SetSeconds(secs % 60);
	return t1 + fTime;
}
bool Time::operator<(Time t2) {
	Time newTime = *this - t2;
	int secs = newTime.GetHours() * 60 * 60 + newTime.GetMinutes() * 60 + newTime.GetSeconds();
	if (secs < 0) return true;
	else return false;
}
bool Time::operator>(Time t2) {
	Time newTime = *this - t2;
	int secs = newTime.GetHours() * 60 * 60 + newTime.GetMinutes() * 60 + newTime.GetSeconds();
	if (secs > 0) return true;
	else return false;
}
bool Time::operator==(Time t2) {
	Time newTime = *this - t2;
	int secs = newTime.GetHours() * 60 * 60 + newTime.GetMinutes() * 60 + newTime.GetSeconds();
	if (secs == 0) return true;
	else return false;
}