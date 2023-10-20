#include <bits/stdc++.h>
using namespace std;

class product
{
    int ID;
    string name;
    float price;

public:
    void setdata(int n);
    void display(int n);
};
void product::setdata(int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> ID;
        cin >> name;
        cin >> price;
    }
}
void product::display(int n)
{
    setdata(n);
    for (int i = 0; i < n; i++)
    {
        cout << ID << endl;
        cout << name << endl;
        cout << price << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    product nykaa;
    nykaa.display(n);

    return 0;
}