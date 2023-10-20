#include <bits/stdc++.h>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void set_roll_no(int b1)
    {
        roll_no = b1;
    }
    void display_roll_no()
    {
        cout << roll_no << endl;
    }
};
class Exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void display_marks()
    {
        cout << maths << endl;
        cout << physics << endl;
    }
};

class Result : public Exam
{
protected:
    float percentage;

public:
    void display()
    {
        display_roll_no();
        display_marks();
        cout << (maths + physics) / 2 << endl;
    }
};

int main()
{
    Result Xe;

    Xe.set_roll_no(10559);
    Xe.set_marks(96.3, 89);
    Xe.display();

    return 0;
}