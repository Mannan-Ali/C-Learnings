#include <bits/stdc++.h>
using namespace std;
/// How many Numebrs between 1  to 1000 divisible by 5 and 

int IE(int num1,int num2,int range)
{
    int c1=range/num1;
    int c2=range/num2;
    int c3=range/(num1*num2);
    return  c1+c2-c3;
}


int main()
{
    int num1,num2,r;
    cin>>num1>>num2>>r;
    cout<<IE(num1,num2,r);
    return 0;
}