#include <iostream>
#include <string>
#include "exception.h"

using namespace std;

// constructor
Exception::Exception(string m) {
	Exception::message = m;
}
Exception::Exception() {
	Exception::message = "Unknown error";
}
// setter
void Exception::SetMessage(string m) {
	Exception::message = m;
}
// getter
string Exception::GetMessage() const {
	return Exception::message;
}
void Exception::Print() const { cout << Exception::message << endl; }