#include "head.h"
#include <stdlib.h>


void Derived::fun()
{
    cout<<"This is Derived fun()\n";
}

int main(int argc, char *argv[])
{    
    Base *p = new Derived();
    p->fun();
    delete p;

    if (argc == 2) {
        simplePattern *handle = NULL;
        for (int i=0; i < atoi(argv[1]); i++ ) {
            handle = simplePattern::getHandler();
            handle->printHandleAddr();
        }
    }
    
    return 0;
}
