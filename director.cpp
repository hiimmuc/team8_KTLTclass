#include "director.h"
using namespace std;

director::director() :employee()
{
	//empty
}


director::director(const char* name2, int salary2) :employee(name2, salary2)
{
	cout << "\ndirector site" << endl;
}

void director::sethours(int hour1)
{
	hours = hour1;
}

void director::pay()
{
	cout << "your salary this month: " << salary * hours << "VND" << endl;
}

void director::do_work()
{
	cout << "hi i'm a director haha" << endl;
}

director::~director()
{
	//empty
}
/*=====================================================================*/