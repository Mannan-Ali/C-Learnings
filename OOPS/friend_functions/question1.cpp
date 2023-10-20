#include <iostream>
using namespace std;

class second;
class first
{
    int data;

public:
    void setdata(int a)
    {
        data = a;
    }

    friend void sum_2Class_value(first x1, second x2);
};

class second
{
    int data_2;

public:
    void setvalue(int a)
    {
        data_2 = a;
    }
    friend void sum_2Class_value(first x1, second x2);
};

void sum_2Class_value(first x1, second x2)
{
    int sum = x1.data + x2.data_2;
    cout << sum << endl;
}
int main()
{
    first mannan;
    mannan.setdata(24);
    second sujal;
    sujal.setvalue(30);
    sum_2Class_value(mannan, sujal);
    return 0;
}