#include <bits/stdc++.h>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int d1)
    {
        cout << "class Base1 is called" << endl;
        data1 = d1;
        print_Base1();
    }
    void print_Base1()
    {
        cout << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int d2)
    {
        cout << "class Base2 is called" << endl;
        data2 = d2;
        print_Base2();
    }
    void print_Base2()
    {
        cout << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int d3, d4;

public:
    Derived(int a1, int a2, int a3, int a4) :  d3(a2), d4(a4),Base2(1), Base1(a3)
    {
        cout << "class Derived is called" << endl;
        cout<<d3<<endl
            <<d4;
    }
    void print_derived()
    {
    }
};

int main()
{
    Derived X(3,4,5,6);

    return 0;
}