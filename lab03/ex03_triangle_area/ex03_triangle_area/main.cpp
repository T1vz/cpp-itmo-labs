#include <iostream>
#include <string>

using namespace std;

// area for equilateral triangle
double getTriangleArea(double a)
{
    return sqrt(3.) / 4 * a * a;
}

// area for NON-equilateral triangle
double getTriangleArea(double a, double b, double c)
{
    double s;
    s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main()
{
    string isTriaEq;

    cout << "Is your triangle equilateral? (Type yes or no): ";
    cin >> isTriaEq;

    double a, area;

    cout << "Enter your values!\n";
    if (isTriaEq == "yes") {
        cout << "Enter a: ";
        cin >> a;
        area = getTriangleArea(a);
    }
    if (isTriaEq == "no") {
        double b, c;
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        cout << "Enter c: ";
        cin >> c;
        area = getTriangleArea(a, b, c);
    }

    cout << "Triangle area is " << area;

    return 0;
}