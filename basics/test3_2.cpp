#include<iostream>
using namespace std;
int main(){
    cout<<"QUESTION : Finding if the inserted number is EVEN/ODD \n";
    int a;
    cout<<"Input value of a :";
    cin>>a;
    if (a%2==0){
        cout<<"a is even number.";
    }else{
        cout<<"a is odd number";
    }
    return 0;
}