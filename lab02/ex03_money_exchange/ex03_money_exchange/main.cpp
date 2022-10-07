#include <iostream>
#include <string>

using namespace std;

const int AMOUT_OF_DENOMINATIONS = 9;
// nominals must be sorted
const int DENOMINATIONS[AMOUT_OF_DENOMINATIONS] = { 1000, 500, 200, 100, 50, 10, 5, 2, 1 }; // 10 rub, 5 rub, 2 rub, 1 rub, 50 cop, 10 cop, 5 cop, 2 cop, 1 cop

int main()
{
	cout << "Enter amout of your money (in cops): ";
	int sum;
	cin >> sum;

	string result = "";
	for (int i = 0; i < AMOUT_OF_DENOMINATIONS; i++) // bring maximum coins from the highest nominal
	{
		if (sum < DENOMINATIONS[i]) {
			continue;
		}

		if (DENOMINATIONS[i] >= 100) {
			result += to_string(sum / DENOMINATIONS[i]) + " coins of " + to_string(DENOMINATIONS[i] / 100) + " rub. ;";
			sum %= DENOMINATIONS[i];
		}
		else {
			result += to_string(sum / DENOMINATIONS[i]) + " coins of " + to_string(DENOMINATIONS[i]) + " cop. ;";
			sum %= DENOMINATIONS[i];
		}
	}
	cout << "Your coins: " << result;

	return 0;
}