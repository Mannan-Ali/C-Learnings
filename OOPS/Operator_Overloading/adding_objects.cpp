#include<bits/stdc++.h>
using namespace std;


class object1{
    int a,b;
    public:
    void print(){
        cout<<a<<" "<<b<<endl;
    }
    object1(){
        a=0;
        b=0;
      
    }
    object1(int x,int y){
        a=x;
        b=y;
        print();
    }
    object1 operator +(object1 num){
    object1 temp;
    temp.a=a+num.a;
    temp.b=b+num.b;
    return temp;
}
};

int main(){
    object1 i1(6,7);
    object1 i2(2,4);
    object1 i3=i1+i2;
    i3.print();

    return 0;

}