#include<bits/stdc++.h>
using namespace std;

void sieve(int n){
    vector<bool> prime(n,false);
    for(int i=2;i<n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    sieve(22);
    return 0;
}