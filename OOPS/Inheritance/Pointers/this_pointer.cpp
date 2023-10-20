#include <bits/stdc++.h>
using namespace std;
class T_Pointer
{
    int real;
    float imaginary;

public:
void setdata(int real,float imaginary){
    this-> real=real;
    this-> imaginary=imaginary;

}void getdata(){
    cout<<real<<" "<<imaginary;
}

    
};

int main(){
    T_Pointer This;
    This.setdata(2,3.4);
    This.getdata();
    return 0;

}
