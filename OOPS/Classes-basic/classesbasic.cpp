#include <bits/stdc++.h>
using namespace std;

class product
{
    int ID;
    string name;
    float price;

public:
    void setdata();
    void display();
};
void product::setdata()
{

    cin >> ID;
    cin >> name;
    cin >> price;
}
void product::display()
{
    setdata();

    cout << ID << endl;
    cout << name << endl;
    cout << price << endl;
}

int main()
{
  
    product nykaa;
    nykaa.display();

    return 0;
}