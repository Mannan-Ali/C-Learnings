#include<bits/stdc++.h>
using namespace std;


class Base1{
    public:
    void greet(){
        cout<<"How are you"<<endl;
    };
};

class Base2:virtual public Base1{
    public:
    
};

class Base3:virtual public Base1{
    public:
   
};
class Derived:public Base2,public Base3{
    public:
    int a;
};

int main(){
    Derived d;
    d.greet();

    return 0;
}