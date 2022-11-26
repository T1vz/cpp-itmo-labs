#include <iostream>
#include <tuple>

using namespace std;

typedef tuple<bool, float, float> Tuple;

Tuple quEqRoots(float a, float b, float c)
{
    bool isHaveRoots = true;
    float d = b * b - 4 * a * c;
    
    if (d < 0) {
        isHaveRoots = false;
    }

    float x1 = (-b + sqrt(d)) / 2 / a;
    float x2 = (-b - sqrt(d)) / 2 / a;

    return make_tuple(isHaveRoots, x1, x2);
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

    Tuple solution = quEqRoots(a, b, c);

    if (!get<0>(solution)) {
        cout << "No roots!";
        return 0;
    }
    cout << "x1: " << get<1>(solution) << "; x2: " << get<2>(solution);

    return 0;
}