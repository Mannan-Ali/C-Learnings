#include <bits/stdc++.h>
using namespace std;

class student
{
    int x;

public:
    void print()
    {
        cout << x << endl;
    }
    student()
    {
        x = 0;
    }
    student(int y)
    {
        x = y;
    }
    ~student()
    {
        cout << "Deteled"<<endl;
    }
};

int main()
{
    student mannan(2);
    mannan.print();
    {
        student jaimin;
        jaimin.print();
    }
    cout<<"Main functiuon"<<endl;
    return 0;
}
