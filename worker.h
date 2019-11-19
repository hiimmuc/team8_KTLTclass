#pragma once
#include"employees.h"
class worker : public employee {
private:
	int level;
public:
	worker();
	worker(const char* name1, int salary1,int level_);
	void sethours(int hours1);
	void pay();
	void do_work();
	~worker();
};
/*====================================================================*/