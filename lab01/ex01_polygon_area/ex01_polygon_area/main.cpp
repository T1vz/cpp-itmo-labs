#include <iostream>

using namespace std;

int main()
{
    double x1, x2, x3, x4, x5, y1, y2, y3, y4, y5;  // Initialize and enter vars of polygon coords
    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter y1: ";
    cin >> y1;
    cout << "Enter x2: ";
    cin >> x2;
    cout << "Enter y2: ";
    cin >> y2;
    cout << "Enter x3: ";
    cin >> x3;
    cout << "Enter y3: ";
    cin >> y3;
    cout << "Enter x4: ";
    cin >> x4;
    cout << "Enter y4: ";
    cin >> y4;
    cout << "Enter x5: ";
    cin >> x5;
    cout << "Enter y5: ";
    cin >> y5;

    // calculate polygon area using a formula
    double area;
    area = 0.5 * abs(x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5);

    // print result to standart out
    cout << "Polygon square is " << area;

    return 0;
}