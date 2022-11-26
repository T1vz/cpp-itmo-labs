#pragma once
#include "dot.h"

using namespace std;

class Triangle
{
public:
	Triangle(Dot*, Dot*, Dot*);
	void Print() const;
	double GetArea() const;
	double GetPerimeter() const;
private:
	Dot* d1;
	Dot* d2;
	Dot* d3;
};