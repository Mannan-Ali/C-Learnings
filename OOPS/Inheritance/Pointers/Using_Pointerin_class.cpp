#include<bits/stdc++.h>
using namespace std;

class F_Pointer{
    int real;
    float imaginary;
    public:
    void setdata(int r,float i){
        real=r;
        imaginary=i;
    }
    void getdata(){
        cout<<real<<endl;
        cout<<imaginary<<endl;
    }
};

int main(){
    F_Pointer c1;
    // F_Pointer *ptr = &c1;
    // ptr->setdata(23,44.6);
    // ptr->getdata();

    F_Pointer *p=new F_Pointer;
    p->setdata(23,44.6);
    p->getdata();


    return 0;

}