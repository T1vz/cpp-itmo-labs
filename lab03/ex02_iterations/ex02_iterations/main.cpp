#include <iostream>

using namespace std;

double getCubeSqrtPow(double a) {
	return pow(a, 1.0 / 3);
}

double getCubeSqrtItFormula(double a, int n) {
	double x, x1;
	x = a;
	do
	{
		x1 = x;
		x = 1.0 / 3 * (a / pow(x1, 2) + 2 * x1);
	} while (abs(x - x1) >= pow(10, -n));
	return x;
}

int main()
{
	double num;
	cout << "Enter your value: ";
	cin >> num;
	cout << "Cube sqrt by pow: " << getCubeSqrtPow(num) << endl;
	int n = 4;
	cout << "Cube sqrt by iteration formula (with " << n + 1 << " digits after point): " << getCubeSqrtItFormula(num, n) << endl;
}