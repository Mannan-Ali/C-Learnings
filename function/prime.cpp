#include<iostream>
#include<cmath>
using namespace std;
bool prime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }return true;
}
int main(){
    int x,y;
    cin>>x>>y;
    for(int j=x;j<=y;j++){
        if(prime(j)){
            cout<<j<<endl;
        }
    }
    return 0;
}
