#include <iostream>

using namespace std;

struct QuadEqSolution {
    float x1, x2;
};

QuadEqSolution quEqRoots(float a, float b, float c)
{
    float d = b * b - 4 * a * c;

    float x1 = (-b + sqrt(d)) / 2 / a;
    float x2 = (-b - sqrt(d)) / 2 / a;
    return QuadEqSolution {x1, x2};
}

int main() {
    float a, b, c, x1, x2;
    cout << "quadratic equation looks like: a * x^2 + b * x + c\n";
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    QuadEqSolution solution = quEqRoots(a, b, c);

    cout << "x1: " << solution.x1 << "; x2: " << solution.x2;

    return 0;
}