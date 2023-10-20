#include<iostream>
#include<cmath>
using namespace std;

int comb(int a){
    int n1=1;
    for(int i=1;i<=a;i++){
        n1*=i;
    }return n1;
}

int main(){
    int n,r;
    cin>>n>>r;
    int x=comb(n)/(comb(r)*comb(n-r));
    cout<<x<<endl;
    return 0;
}