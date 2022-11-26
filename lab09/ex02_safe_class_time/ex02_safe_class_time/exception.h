#pragma once
#include <string>

using namespace std;

class Exception {
public:
	// constructor
	Exception(string);
	Exception();
	// setter
	void SetMessage(string);
	// getter
	string GetMessage() const;
	void Print() const;
private:
	string message;
};