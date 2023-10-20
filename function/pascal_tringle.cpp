#include<iostream>
#include<cmath>
using namespace std;
int fact(int a){
    int factorial=1;
    for(int x=1;x<=a;x++){
        factorial*=x;
    }
    return factorial;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j));
        }cout<<endl;
    }
    return 0;
}