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
    student(student &obj){
        cout<<"Made copy constructor";
        this->roll_no= obj.roll_no;
        this->fees= obj.fees;
        this->middle_name= obj.middle_name;

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
