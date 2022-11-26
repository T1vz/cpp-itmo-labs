#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	string line, filename;

	cout << "Enter file name to save a poem:\n";
	cin >> filename;
	cout << "Enter your poem here (enter /quit to stop):\n";

	ofstream out(filename, ios::out | ios::binary);
	if (!out) {
		cout << "Файл открыть невозможно\n";
		return 1;
	}

	while (true)
	{
		getline(cin, line);
		if (line == "/quit") {
			break;
		}
		out << line << "\n";
	}

	out.close();
	return 0;
}