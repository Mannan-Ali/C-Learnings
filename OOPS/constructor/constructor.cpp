#include <bits/stdc++.h>
using namespace std;

class student
{
    int roll_no;
    string name;
    char grade;

public:
    void print()
    {
        cout << name;
    }
    student()
    {
        // Default constructor
        roll_no = 0;
        name = "NO Input";
        grade = 'Z';
    }

    student(int a, string n, char g)
    {
        // Parameterazid constructor
        roll_no = a;
        name = n;
        grade = g;
    }
};

int main()
{
    student Sumit;
    student aryan;
    student Mannan(21, "Mannan", 'A');
    aryan = student(22, "aryan", 'A');
    Sumit.print();
    Mannan.print();
    aryan.print();
    return 0;
}