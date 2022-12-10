#pragma once
#include "human.h"
#include <string>
class teacher : public human {
public:
	teacher(
		std::string last_name,
		std::string name,
		std::string second_name,
		unsigned int work_time
	) : human(
		last_name,
		name,
		second_name
	) {
		this->work_time = work_time;
	}
	unsigned int get_work_time()
	{
		return this->work_time;

	}

	void printInfo() {
		std::cout << "Status: Teacher;" << "Name: " << this->get_full_name() << "; Working time: " << this->get_work_time() << "\n";
	}
private:
	unsigned int work_time;
};
