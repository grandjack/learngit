#include "head.h"

extern void conmmon_fun();

void Derived::fun()
{
	cout<<"This is Derived fun()\n";
}

int main(int argc, char *argv[])
{
	cout<<"Hello World\n";
	
	Base *p = new Derived();
	p->fun();
	delete p;
	conmmon_fun();
	return 0;
}
