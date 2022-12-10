#include <iostream>
#include <vector>
#include "human.h"
#include "teacher.h"
#include "student.h"

int main()
{
	// Оценкистудента
	std::vector<int> scores;
	// Добавление оценок студента в вектор
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);

	human* stud = new student("Petrov", "Ivan", "Alekseevich", scores);
	unsigned int teacher_work_time = 40;
	human* tch = new teacher("Sergeev", "Dmitriy", "Sergeevich", 40);

	stud->printInfo();
	tch->printInfo();

	return 0;
}