#include<bits/stdc++.h>
using namespace std;
int palindrome(int n){
    int res=0;
    while(n>0){
        int calc=n%10;
        res=res*10+calc;
        n=n/10;
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    cout<<palindrome(n);

    return 0;
}
