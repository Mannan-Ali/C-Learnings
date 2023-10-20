#include <bits/stdc++.h>
using namespace std;

class Base1
{
protected:
    int base1_int;

public:
    void set_base1_int(int b1)
    {
        base1_int = b1;
    }
};

class Base2
{
protected:
    int base2_int;

public:
    void set_base2_int(int b2)
    {
        base2_int = b2;
    }
};

class Derived : public Base1, public Base2
{

public:
    void get_all()
    {
        cout << base1_int << endl;
        cout << base2_int << endl;
        cout << base1_int + base2_int << endl;
    }
};

int main()
{
    Derived Xe;

    Xe.set_base1_int(67);
    Xe.set_base2_int(2);
    Xe.get_all();

    return 0;
}