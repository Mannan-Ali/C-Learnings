#include<bits/stdc++.h>
using namespace std;

int GCD(int a ,int b){
    if(b==0){
        return a;
    }
    return GCD(b,a%b);
}
int main(){
    cout<<GCD(6,0)<<endl;
    cout<<GCD(0,6);
    return 0;
}