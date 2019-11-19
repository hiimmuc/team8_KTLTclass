#pragma once
#include"employees.h"
class director : public employee {
public:
	
	director();
	director(const char* name_, int salary_);
	~director();
	void sethours(int hours2);
	void pay();
	void do_work();
};
/*===========================================================================*/