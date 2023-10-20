#include <bits/stdc++.h>
using namespace std;

class FunO
{
protected:
    int Base1 = 69;

public:
    void display()
    {
        cout << "No argument function : "<< Base1 << endl;
    }
    void display(int x)
    {
        cout << "1 argument function : ";
        Base1 = x;
        cout << Base1
             << endl;
    }
    void display(int x, int y)
    {
        cout << "2 argument function : ";
        Base1 = x + y;
        cout << Base1
             << endl;
    }
};

int main()
{
    FunO obj1;
    obj1.display();
    obj1.display(23);
    obj1.display(22, 44);

    return 0;
}