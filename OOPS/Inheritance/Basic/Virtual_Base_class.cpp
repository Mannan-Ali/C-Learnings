#include<bits/stdc++.h>
using namespace std;


class Base1{
    public:
     Base1(){
        cout<<"I am base 1";
    }
    void greet(){
        cout<<"I am class 1"<<endl;
    };
};

class Base2:public Base1{
    public:
    Base2(){
        cout<<"I am base 2"<<endl;
    }
    
};

class Base3:virtual public Base2{
    public:
     Base3(){
        cout<<"I am base 3"<<endl;
    }
   
};
class Derived:public Base2,public Base3{
    public:
     Derived(){
        cout<<"I am derived"<<endl;
    }
    int a;
};

int main(){
    Derived d;

    return 0;
}