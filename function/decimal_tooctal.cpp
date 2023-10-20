#include<bits/stdc++.h>
using namespace std;


int decimaltooctal(int n){
    int x=1;
    while(x<=n){
        x*=8;
    }
    x/=8;
    int ans=0;
    while(x>0){
        int lastdigit=n/x;
        n-=lastdigit*x;
        x/=8;
        ans=ans*10+lastdigit;

    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<decimaltooctal(n);
    
    return 0;
}