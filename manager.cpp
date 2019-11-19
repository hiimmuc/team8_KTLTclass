#include "manager.h"
using namespace std;

manager::manager() :employee()
{
	dept = 0;
}


manager::manager(const char* name3, int salary3) :employee(name3, salary3)
{
	cout << "\nmanager site" << endl;
}

void manager::sethours(int hour3)
{
	hours = hour3;
}

void manager::setdept_(int dept_)
{
	dept = dept_;
}

void manager::pay()
{
	cout << "dept: " <<dept<< "my salary this month: " << salary * hours << "VND" << endl;
}

void manager::do_work()
{
	cout << "hi i'm a manager \n"<<"don't tell the director that he's so smart hihi " << endl;
}

manager::~manager()
{
	if (dept != 0) {
		dept = 0;
	}
}
/*=====================================================================*/