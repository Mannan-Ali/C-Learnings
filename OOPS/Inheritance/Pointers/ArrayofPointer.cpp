#include <bits/stdc++.h>
using namespace std;

class Pointer
{
    int real;
    float imaginary;

public:
    void setdata()
    {
        cin >> real >> imaginary;
    }
    void getdata()
    {
        cout << real << " "
             << imaginary << endl;
    }
};

int main()
{
    int a = 3;
    Pointer *p = new Pointer[a];
    for (int i = 0; i < a; i++)
    {
        p[i].setdata();
    }
    for (int i = 0; i < a; i++)
    {
        p[i].getdata();
    }

    return 0;
}