#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Base
{
protected:
    int Base1 = 69;

public:
    virtual void display()
    {
        cout << Base1;
    }
};

class Derived : public Base
{
protected:
    int derived1 = 96;

public:
    void display()
    {
        cout << derived1;
    }
};

int main()
{
    Base obj1;
    Base *ptr;
    Derived obj2;
    ptr = &obj2;
    ptr->display();

    return 0;
}