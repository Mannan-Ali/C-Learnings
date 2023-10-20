#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;

    if (a>5)
    {
        cout<<"greater than 5 \n";
    }else if (a<5)
    {
        cout<<"less than 5 \n";
    }else if(a==5){
        cout<<"equal to 5";
    }else{
        cout<<"error";
    }
    return 0;
}