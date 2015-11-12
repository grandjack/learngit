#include <iostream>
using namespace std;

class Base {
public :
    int a;
    Base () {}
    ~Base () {}
    virtual void fun() = 0;
private:

};

class Derived : public Base {
public:
    int b;
    Derived () {}
    ~Derived () {}

    void fun ();
private:
};

class simplePattern {
public:
    static simplePattern *handler;
    static simplePattern *getHandler() {
        if (handler == NULL) {
            handler = new simplePattern();
        }
        
        return handler;
    }

    void printHandleAddr() {
        cout<<"handler address: "<<handler<<endl;
    }

    ~simplePattern(){}

private:
    simplePattern(){}
    simplePattern (simplePattern &a){}
    simplePattern & operator=(simplePattern &a){return *this;}
};

simplePattern *simplePattern::handler = NULL;
