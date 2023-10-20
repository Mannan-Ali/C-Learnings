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
        print();
    }
    object1(int x,int y){
        a=x;
        b=y;
        print();
    }
    bool operator ==(object1 &num){
        if(a==num.a && b==num.b){
            return true;
        }
        else
            return false;

    }
};

int main(){
    object1 i1(6,7);
    object1 i2(2,4);
    object1 i3 = i2;
    i3.print();
    if(i3==i2){
        cout<<"same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }
 

    return 0;

}