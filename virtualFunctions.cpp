// CPP program to illustrate
// concept of Virtual Functions
#include<iostream>
using namespace std;

class base
{
public:
    virtual void print ()   // bound at run time
    { cout<< "print base class" <<endl; }

    void show ()            // bound at compile time
    { cout<< "show base class" <<endl; }
};

class derived:public base
{
public:
    void print ()
    { cout<< "print derived class" <<endl; }

    void show ()
    { cout<< "show derived class" <<endl; }
};

int main()
{
    // late/runtime binding: content of pointer
    // early/compile time binding: type of pointer
    base *bptr;
    derived d;
    bptr = &d;

    //virtual function, binded at runtime
    bptr->print(); // print derived class

    // Non-virtual function, binded at compile time
    bptr->show(); // show base class
}
