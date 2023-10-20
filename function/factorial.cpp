#include<bits/stdc++.h>
using namespace std;
void factorial(int n){
    int b=1;
    for (int i=1;i<=n;i++){
        b*=i;
    }cout<<b<<endl;
}
int main(){
    int a;
    cin>>a;
    factorial(a);
    return 0;
}