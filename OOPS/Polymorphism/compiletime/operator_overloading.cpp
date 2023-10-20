#include <bits/stdc++.h>
using namespace std;

class Op_overl
{
    int a,b;;

public:
    Op_overl(){
        a=0;
        b=0;
       
    }
     Op_overl(int x,int y){
        a=x;
        b=y;
        display();
    }
    void display(){
        cout<<a<<" "<<b<<endl;
    }

    Op_overl operator +(Op_overl x){
        Op_overl res;
        res.a=a+x.a;
        res.b=b+x.b;
        return res;
    }
};

int main()
{
    Op_overl obj1(2,3),obj2(6,7);
    Op_overl obj3=obj1+obj2;
    obj3.display();

    return 0;
}