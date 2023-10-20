#include <bits/stdc++.h>
using namespace std;


class student
{
public:
    //int count=0;
    static int count;
    student()
    {
        count++;
        cout << "This is the time when the constructor is called for object " << count << endl;
    }
    ~student()
    {
        cout << "This is the time when the destructor is called for object " << count << endl;
        count--;
    }
};

int student :: count=0;
int main()
{
    cout << "Main function starts from here " << endl;
    cout << "Creating the first Object " << endl;
    student n1;
    {
        cout << "Entering new block Block " << endl
             << endl;
        cout << "Creaing the Second Object " << endl
             << endl;
        student n2;
     
        cout << "Creating the 3rd Object" << endl;
        student n3;
       
        cout << "Exiting the block " << endl;
    }
    cout << "Back to main function " << endl;

    return 0;
}