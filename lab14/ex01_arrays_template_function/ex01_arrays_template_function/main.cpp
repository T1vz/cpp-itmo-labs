#include <iostream>
#include <string>

using namespace std;

template <class T>
T average(T arr[], int n) {
	double res = 0;
	for (int i = 0; i < n; i++) {
		res += arr[i];
	}
	return res / n;
}

int main() {
	double doubleArr[] = { 2.6, 3.2, 1.2 };
	int intArr[] = { 1, 3, 8 };
	long longArr[] = { 14223424234, 234243242, 534534655 };
	char charArr[] = {'q', 'w', 'r'};

	cout << "double: " << average(doubleArr, 3) << '\n' << "int: " << average(intArr, 3) << '\n' << "long: " << average(longArr, 3) << '\n' << "char: " << average(charArr, 3) << '\n';

	return 0;
}