#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
    int a=3;
    float b=55.43l;
    double c=44;
    long double d=412;
    int long long e=1234;
    int short f=2;
    cout<<typeid(45.66L).name()<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(e)<<endl;
    cout<<sizeof(f)<<endl;
    cout<<typeid(a).name()<<endl;
    cout<<typeid(b).name()<<endl;
    cout<<typeid(c).name()<<endl;
    cout<<typeid(d).name()<<endl;
    cout<<typeid(e).name()<<endl;
    cout<<typeid(f).name()<<endl;
    return 0;
}