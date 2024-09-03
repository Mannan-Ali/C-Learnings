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
class Derived2: public Derived{
    int derived2 =22;
    void display(){
        cout<<derived2;
    }
};
int main()
{
    Base obj1;
    Base *ptr, *ptr2;
    Derived obj2;
    ptr = &obj2;
    ptr2=&obj1;
    
    ptr->display();
    ptr2->display();
    return 0;
}