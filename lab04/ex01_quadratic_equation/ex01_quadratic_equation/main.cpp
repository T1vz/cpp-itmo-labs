#include <iostream>

using namespace std;

int quEqRoots(double a, double b, double c, double& x1, double& x2)
{
    double d = b * b - 4 * a * c;
    if (d < 0) {
        return -1;
    }

    x1 = (-b + sqrt(d)) / 2 / a;

    if (d == 0) {
        x2 = x1;
        return 0;
    }

    x2 = (-b - sqrt(d)) / 2 / a;
    return 1;
}

int main()
{
    double a, b, c, x1, x2;
    cout << "quadratic equation looks like: a * x^2 + b * x + c\n";
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    int rootsType = quEqRoots(a, b, c, x1, x2);
    switch (rootsType)
    {
    case 1: 
        cout << "The roots of the equation x1 = " << x1 << ", x2 = " << x2;
        break;
    case 0:
        cout << "Root equation is one x1 = x2 = " << x1;
        break;
    case -1:
        cout << "There are no roots of the equation";
        break;
    default:
        cout << "ERROR!";
        break;
    }

    return 0;
}