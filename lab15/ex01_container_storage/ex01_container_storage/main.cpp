#include <iostream>
#include <string>
#include <map>

using namespace std;

struct StudentGrade{
    StudentGrade(string n, char g) {
        name = n;
        grade = g;
    }
	string name;
	char grade;
};

void printMap(string comment, const map<string, char>& m)
{
    cout << comment;

    for (const auto& n : m) {
        cout << "map[" << n.first << "] = " << n.second << "; ";
    }
    cout << '\n';
}

int main() {
    map<string, char> grades;

    StudentGrade sg1 = StudentGrade("Vasya", '5');
    StudentGrade sg2 = StudentGrade("Petya", '3');
    StudentGrade sg3 = StudentGrade("Armen", '2');

    grades[sg1.name] = sg1.grade;
    grades[sg2.name] = sg2.grade;
    grades[sg3.name] = sg3.grade;

    printMap("My map: ", grades);

    return 0;
}