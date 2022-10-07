#include <iostream>
#include <string>

using namespace std;

const int ASCII_DIGITS_INDENT = 48;

int main()
{
	cout << "Enter your SNILS: ";
	string snils;
	cin >> snils;

	if (snils.length() != 11) { // snils must contain 11 chars
		cout << "False";
		return 0;
	}

	char lastChar = snils[0];
	int sum = (int)lastChar - ASCII_DIGITS_INDENT; // in ASCII code the numbers(digits) start from 48
	int charsInRow = 1;
	for (int i = 1; i < 9; i++) // check every char of string
	{
		if (charsInRow == 3) { // snils mustn't contain 3 similar chars in a row
			cout << "False";
			return 0;
		}

		sum += ((int)snils[i] - ASCII_DIGITS_INDENT) * (i + 1); // in ASCII code the numbers(digits) start from 48 and we are doing condition #1

		if (lastChar == snils[i]) { // counting chars in a row
			charsInRow += 1;
		}
		else { // reseting counter
			charsInRow = 1;
			lastChar = snils[i];
		}
	}

	int control = stoi(snils.substr(9, 11)); // control summ from entered string to int
	if ((sum < 100 && control == sum) || ((sum == 100 || sum == 101) && control == 0)) {
		cout << "True";
		return 0;
	}

	if (sum > 101) {
		int ost = sum % 101;
		if ((ost < 100 && control == ost) || (ost == 100 && control == 0)) {
			cout << "True";
			return 0;
		}
	}
	
	cout << "False";
	return 0;
}