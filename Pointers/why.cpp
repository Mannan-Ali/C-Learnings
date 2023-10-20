#include<bits/stdc++.h>
using namespace std;

int main(){
    int num=5;
    int a=num;

    cout<<num<<endl;
    a++;
    cout<<num<<endl;
    cout<<a<<endl;

    int *ptr=&num;

    cout<<num<<endl;
    (*ptr)++;
    cout<<num<<endl;
    cout<<*ptr<<endl;
    return 0;

}