#include "dot.h"
#include "triangle.h"
#include <iostream>
#include <math.h>

using namespace std;

class CompTriangle {
public:
	CompTriangle(double x1, double y1, double x2, double y2, double x3, double y3) {
		d1.SetDot(x1, y1);
		d2.SetDot(x2, y2);
		d3.SetDot(x3, y3);
	}
	void Print() {
		double a = d1.distanceTo(&d2);
		double b = d2.distanceTo(&d3);
		double c = d1.distanceTo(&d3);
		cout << "Sides: " << a << ";" << b << ";" << c << '\n';
	}
	double GetArea() {
		double s;
		double a = d1.distanceTo(&d2);
		double b = d2.distanceTo(&d3);
		double c = d1.distanceTo(&d3);
		s = (a + b + c) / 2;
		return sqrt(s * (s - a) * (s - b) * (s - c));
	}
	double GetPerimeter() {
		double a = d1.distanceTo(&d2);
		double b = d2.distanceTo(&d3);
		double c = d1.distanceTo(&d3);
		return a + b + c;
	}
private:
	class CompDot {
	public:
		CompDot()
		{
			x = 0; y = 0;
		}
		void SetDot(double x, double y) {
			this->x = x;
			this->y = y;
		}
		double GetX() {
			return x;
		}
		double GetY() {
			return y;
		}
		double distanceTo(CompDot* d) {
			return sqrt(pow(d->GetX() - x, 2) + pow(d->GetY() - y, 2));
		}
	private:
		double x, y;
	};

	CompDot d1, d2, d3;
};

int main() {
	// aggregation
	Dot dot1 = Dot(0, 0);
	Dot dot2 = Dot(0, 4);
	Dot dot3 = Dot(3, 0);

	Triangle* triangle1 = new Triangle(&dot1, &dot2, &dot3);
	triangle1->Print();
	cout << "triangle 1 perimeter: " << triangle1->GetPerimeter() << "; area: " << triangle1->GetArea() << '\n';
	
	// composition
	CompTriangle* triangle2 = new CompTriangle(0, 0, 0, 4, 3, 0);
	triangle2->Print();
	cout << "triangle 2 perimeter: " << triangle2->GetPerimeter() << "; area: " << triangle2->GetArea() << '\n';

	return 0;
}