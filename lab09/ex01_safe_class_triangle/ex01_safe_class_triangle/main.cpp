#include <iostream>
#include <string>

using namespace std;

class Exception {
public:
	// constructor
	Exception(string m) {
		message = m;
	}
	Exception() {
		message = "Unknown error";
	}
	// setter
	void SetMessage(string m) {
		message = m;
	}
	// getter
	string GetMessage() const {
		return message;
	}
	void Print() const { cout << message << endl; }
private:
	string message;
};

class Triangle {
public:
	// constructor
	Triangle(float a1, float b1, float c1) {
		if (a1 <= 0 || b1 <= 0 || c1 <= 0 || (a1 + b1 < c1) || (a1 + c1 < b1) || (b1 + c1 < a1)) {
			throw *new Exception("Wrong triangle, inpossible a,b,c parametrs!");
		}
		else {
			SetA(a1);
			SetB(b1);
			SetC(c1);
		}
	}
	// setter
	void SetABC(float a1, float b1, float c1) {
		if (a1 <= 0 || b1 <= 0 || c1 <= 0 || (a1 + b1 < c1) || (a1 + c1 < b1) || (b1 + c1 < a1)) {
			throw* new Exception("Wrong triangle, inpossible a,b,c parametrs!");
		}
		else {
			SetA(a1);
			SetB(b1);
			SetC(c1);
		}
	}
	// getter
	float GetA() const {
		return a;
	}
	float GetB() const {
		return b;
	}
	float GetC() const {
		return c;
	}
	// method
	float GetArea() const {
		float s;
		s = (GetA() + GetB() + GetC()) / 2;
		return sqrt(s * (s - GetA()) * (s - GetB()) * (s - GetC()));
	}
private:
	float a, b, c;
	// setter
	void SetA(float e) {
		a = e;
	}
	void SetB(float e) {
		b = e;
	}
	void SetC(float e) {
		c = e;
	}
};

int main() {
	try
	{
		Triangle *trueTriangle = new Triangle(5, 3, 6);
		cout << trueTriangle->GetArea() << '\n';
		Triangle *falseTriangle = new Triangle(2, 5, 8);
		cout << falseTriangle->GetArea() << '\n';
	}
	catch (Exception& error)
	{
		error.Print();
	} 

	return 0;
}