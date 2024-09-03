#include <bits/stdc++.h>
using namespace std;
class functions;

class calculator{
    int m,n;
    public:
    int friendssum(functions o1, functions o2);

};

class functions
{
    int a, b;
    friend int calculator :: friendssum(functions o1, functions o2){
        // functions o3;
        // o3.setdata((o1.a + o2.a), (o1.b + o2.b)); 
    }

public:

    void setdata(int cx, int cy)
    {
        a = cx;
        b = cy;
        display();
    }
    void display()
    {
        cout << a << " and " << b << endl;
    }
};

int calculator :: friendssum(functions o1, functions o2){
    functions o3;
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));
}


int main()
{
    functions f1, f2;
    f1.setdata(2, 4);
    f2.setdata(5, 6);
    
    calculator c1;
    c1.friendssum(f1,f2);
    return 0;
}