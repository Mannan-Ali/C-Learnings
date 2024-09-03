#include <bits/stdc++.h>
using namespace std;

class student
{
    int roll_no;
    float fees;
    string middle_name;

   
public:
 void print()
    {
        cout << roll_no << endl;
    }

    student()
    {
        roll_no = 0;
        fees = 0;
        middle_name = "No Input";
        print();
    }
    student(int r, float f, string n)
    {
        roll_no = r;
        fees = f;
        middle_name = n;
        print();
    }
   
};

int main()
{
    student mannan(21, 3000, "ali");

    student sumit(22, 3000, "bajpaye");
    student rahul(mannan);
    rahul.print();

    return 0;
}
