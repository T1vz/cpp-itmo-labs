#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // для алгоритма сортировки

class Point
{
public:
	// constructor
	Point(double x1, double y1) : x(x1), y(y1) {}
	// methods
	double Distance() {
		return sqrt(x * x + y * y);
	}
	//operators
	bool operator<(Point point)
	{
		return this->Distance() < point.Distance();
	}
	bool operator>(Point point)
	{
		return this->Distance() < point.Distance();

	}

	friend std::ostream& operator<<(std::ostream& out, const Point& point)
	{
		out << "(" << point.x << ", " << point.y << ")";
		return out;
	}
private:
	double x, y;
};

int main()
{
	std::vector<Point> v;
	v.push_back(Point(1, 2));
	v.push_back(Point(10, 12));
	v.push_back(Point(21, 7));
	v.push_back(Point(4, 8));
	std::sort(v.begin(), v.end()); // требуется перегрузка оператора < для

	// класса Point

	for (auto& point : v)
		std::cout << point << '\n'; // требуется перегрузка оператора << для

	// класса Point

	return 0;
}