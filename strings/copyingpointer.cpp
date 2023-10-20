#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int num=5;
//     int *ptr=&num;
//     int *p=ptr;
//     (*p)++;
//     cout<<&num<<endl;
//     cout<<&ptr<<"-"<<ptr<<" - "<<*ptr<<endl;
//     cout<<&p<<"-"<<p<<" - "<<*p<<endl;

//     int **x=&ptr;
//     cout<<x<<" - "<<*x<<"-"<<**x<<endl;
//     return 0;
// }

int main(){
    int n[10]={1,9,3,4,5,6};
    char ch[]="abcd";
    char * c=&ch[0];
    int *ptr=n;
    cout<<ch<<endl;
    cout<<c<<endl;
    cout<<*c<<endl;
    return 0;
}