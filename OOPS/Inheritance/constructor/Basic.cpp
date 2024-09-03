#include<bits/stdc++.h>
using namespace std;


class Base1{
    public:
    int ID;
    float salary;
    Base1(){
        cout<<"I am sdgrggfsfgsgsr base 1 ";
    };
    Base1(int i){
        ID=i;
        salary=34.7;
    }
};

class Derived : public  Base1{
    public:
    Derived(int i){
        ID=i;
        cout<<"I am base 3";
        
    }
    int language=9;
};

int main(){
   // Base1 Mannan(1),Charan(2);
    Derived d(10);

    return 0;
}