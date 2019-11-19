#pragma once
#include"employees.h"
class manager :public employee {
private:
	int dept;
public:
	manager();
	manager(const char* name_, int salary_);
	~manager();
	int hours;
	void sethours(int hour3);
	void setdept_(int dept_);
	void pay();
	void do_work();
};
/*========================================================================================*/
