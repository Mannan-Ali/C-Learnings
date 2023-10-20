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
        display();
    }
    void display()
    {
        cout << data << " ";
    }

    friend void exchange_obj(first &x1, second &x2);
};

class second
{
    int data_2;

public:
    void setvalue(int a)
    {
        data_2 = a;
        display();
    }
    void display()
    {
        cout << data_2<<" ";
    }
    friend void exchange_obj(first &x1, second &x2);
};

void exchange_obj(first &x1, second &x2)
{
    int temp = x1.data;
    x1.data = x2.data_2;
    x2.data_2 = temp;
    x1.display();
    x2.display();
}
int main()
{
     cout << "The values before exchanging the values are : ";
    first mannan;
    mannan.setdata(24);
    second sujal;
    sujal.setvalue(30);
    cout<<endl;
    cout << "The values after exchanging the values are : ";
    exchange_obj(mannan, sujal);

    return 0;
}