#include<bits/stdc++.h>
using namespace std;

class student{
    int x;

    public:
    void print(){
        cout<<x<<endl;
    }
    student(){
        x=0;
    }
    student(int y){
        x=y;
    }
    ~student(){
        cout<<"Deteled";
    }
};

int main(){
    student mannan(2),jaimin;
    mannan.print();
    jaimin.print();

    return 0;
}
