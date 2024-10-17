#include <bits/stdc++.h>
using namespace std;

// class product
// {
//     int ItemID[100];
//     float price[100];

// public:
//     int counter = 0;
//     // void initcounter(void){ counter = 0; }
//     void setdata(void);
//     void display(void);
// };

// void product::setdata(void)
// {
//     cin >> ItemID[counter];
//     cin >> price[counter];
//     counter++;
// }

// void product::display(void)
// {
//     setdata();
//     for(int i=0;i<counter;i++)
//     cout << ItemID[i] << " " << price[i] << endl;
// }

class Student
{
    public:
    string name;
    int age;
    string gender;

    void printInfo()
    {
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }
};
int main()
{
    Student ClassA[3];
    for(int i=0;i<3;i++){
        cin>>ClassA[i].name;
        cin>>ClassA[i].age;
        cin>>ClassA[i].gender;
    }

    for(int i=0;i<3;i++){
        ClassA[i].printInfo();
    }
    // product dukaan, k, s;
    // dukaan.display();
    // k.display();
    // s.display();
    return 0;
}