#include<bits/stdc++.h>
using namespace std;


class Base1{
    public:
    void greet(){
        cout<<"How are you"<<endl;
    };
};

class Base2{
    public:
    void greet(){
        cout<<"Kese ho"<<endl;
    };
};

class Derived:public Base1,Base2{
    public:
    int a;
    void greet(){
        Base1::greet();
    }
};

int main(){
    Derived d;
    d.greet();

    return 0;
}