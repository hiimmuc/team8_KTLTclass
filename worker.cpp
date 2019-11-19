#include "worker.h"
using namespace std;

worker::worker():employee()
{
	level = 0;
}


worker::worker(const char* name1, int salary1, int level_):employee(name1,salary1)
{
	level = level_;
}

void worker::sethours(int hour1)
{
	hours = hour1;
}

void worker::pay()
{
	cout <<" " << "your salary this month: " << salary * hours * level << "VND" << endl;
}

void worker::do_work()
{
	cout << "hi i'm a worker huhu" << endl;
}

worker::~worker()
{
	if (level != 0) {
		level = 0;
	}
}
/*=====================================================================*/