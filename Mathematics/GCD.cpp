#include<bits/stdc++.h>
using namespace std;

int GCD(int a ,int b){
    if(b==0){
        return a;
    }
    return GCD(b,a%b);
}
int main(){
    cout<<GCD(10,15)<<endl;
    return 0;
}