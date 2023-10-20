#include<bits/stdc++.h>
using namespace std;

int GCD(int a ,int b){
    if(b==0){
        return a;
    }
    return GCD(b,a%b);
}
int LCM(int m,int n){
    int val=(m*n)/GCD(m,n);
    return val;
}
int main(){
    cout<<LCM(4,7)<<endl;
    cout<<GCD(12,6);
    return 0;
}