#include <bits/stdc++.h>
using namespace std;

class product
{
    int ID;
    string name;
    float price;

public:
    void setdata(void);
    void display(void);
    void setData(int i, string n, float f);
};
void product::setdata(void)
{
    cout << "Enter the value of id : ";
    cin >> ID;
    cout << "Enter the value of id : " << endl;
    cin >> name;
    cout << "Enter the value of id : " << endl;
    cin >> price;
}
void product::display(void)
{
    // setdata();

    cout <<"The value of the ID is : " <<ID << endl;
    cout <<"The value of the name is : " <<name << endl;
    cout <<"The value of the Price is : " <<price << endl;
}
void product ::setData(int i, string n, float f)
{
    this->ID = i;
    this->name = n;
    this->price = f;
}
int main()
{

    product nykaa;
    nykaa.setData(101, "Sampoo", 233.4);
    nykaa.display();

    return 0;
}