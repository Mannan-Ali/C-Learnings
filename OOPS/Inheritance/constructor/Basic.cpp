#include<bits/stdc++.h>
using namespace std;


class Base1{
    public:
    int ID;
    float salary;
    Base1(){};
    Base1(int i){
        ID=i;
        salary=34.0;
    }
};

class Derived : public  Base1{
    public:
    Derived(int i){
        ID=i;
        
    }
    int language=9;
};

int main(){
    Base1 Mannan(1),Charan(2);
    cout<<Mannan.ID<<endl;
    cout<<Charan.ID<<endl;
    cout<<Mannan.salary<<endl;
    cout<<Charan.salary<<endl;
    Derived d(10);
    cout<<d.ID;
    return 0;
}