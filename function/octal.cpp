#include<bits/stdc++.h>
using namespace std;


int octatodecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int lastdigit=n%10;
        ans+=lastdigit*x;
        x*=8;
        n/=10;
    }
    return ans;
}


int main(){
    int n;
    cin>>n;
    cout<<octatodecimal(n);
    return 0;

}