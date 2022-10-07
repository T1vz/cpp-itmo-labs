#include <iostream>

using namespace std;

bool isPrime(int num) { // Checking if number isPrime
	if (num < 2) { // 2 - always prime number
		return false;
	}

	for (int i = 2; i <= num / 2; i++)
	{
		if (num % i == 0) { // if number dividing to another number and not 1 
			return false;
		}
	}
	return true;
}

int primePos(int num) { // calculating position of prime number of all prime numbers
	if (!isPrime(num)) {
		return 0;
	}
	int pos = 0;
	for (int i = 2; i < num; i++)
	{
		if (isPrime(i)) {
			pos += 1;
		}
	}
	return pos + 1;
}

int main()
{
	cout << "Enter your number: ";
	int num;
	cin >> num;

	int pos = primePos(num);
	if (pos != 0) {
		if (isPrime(pos)) {
			cout << "Your number is SuperPrime and it has position = " << pos;
		}
		else {
			cout << "Your number isn't SuperPrime, but it's Prime and with position = " << pos;
		}
	}
	else {
		cout << "Your number isn't Prime";
	}

	return 0;
}
