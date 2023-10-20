#include<bits/stdc++.h>
using namespace std;

int main(){
    int num=5;
    int *ptr=&num;
    cout<<"value of num is = "<<num<<endl;
    cout<<"the address of num is = "<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<sizeof(num)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<"the size of pointer is = "<<sizeof(ptr)<<endl;
    return 0;
}