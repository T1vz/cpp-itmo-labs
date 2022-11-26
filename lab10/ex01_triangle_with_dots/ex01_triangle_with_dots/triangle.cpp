#include "dot.h"
#include "triangle.h"
#include <iostream>

using namespace std;

Triangle::Triangle(Dot *d1, Dot *d2, Dot* d3) {
	Triangle::d1 = d1;
	Triangle::d2 = d2;
	Triangle::d3 = d3;
}
void Triangle::Print() const {
	cout << "Sides: " << Triangle::d1->distanceTo(*Triangle::d2) << ";" << Triangle::d2->distanceTo(*Triangle::d3) << ";" << Triangle::d1->distanceTo(*Triangle::d3) << '\n';
}
double Triangle::GetArea() const {
	double s;
	double a = Triangle::d1->distanceTo(*Triangle::d2);
	double b = Triangle::d2->distanceTo(*Triangle::d3);
	double c = Triangle::d1->distanceTo(*Triangle::d3);
    s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
double Triangle::GetPerimeter() const {
	double a = Triangle::d1->distanceTo(*Triangle::d2);
	double b = Triangle::d2->distanceTo(*Triangle::d3);
	double c = Triangle::d1->distanceTo(*Triangle::d3);
	return a + b + c;
}