#include<iostream>
#include<cmath>
using namespace std;
void fibonaci(int n){
    int t1=0;
    int t2=1;
    int nterm=t1+t2;
    for(int i=1;i<=n;i++){
        cout<<t1<<endl;
        nterm=t1+t2;
        t1=t2;
        t2=nterm;
    }
}
int main(){
    int a;
    cin>>a;
    fibonaci(a);
    return 0;
}