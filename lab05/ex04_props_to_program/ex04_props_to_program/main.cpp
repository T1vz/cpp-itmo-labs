#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char* argv[])
{
	if (argc >= 4) {
		if (strncmp(argv[1], "-a", 2) == 0) {
			cout << "Sum of arguments: " << atoi(argv[2]) + atoi(argv[3]) << "\n";
		}
		else if (strncmp(argv[1], "-m", 2) == 0) {
			cout << "Multiply of arguments: " << atoi(argv[2]) * atoi(argv[3]) << "\n";
		}
		else {
			cout << "Wrong flag" << "\n";
		}
	}
	else {
		cout << "Wrong number of arguments" << "\n";
	}
	return 0;
}