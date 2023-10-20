#include <bits/stdc++.h>
using namespace std;

int  increasing(int n){
    if(n==1){
        cout<<"1"<<" ";
        return 1;
    }
    increasing(n-1);
    cout<<n<<" ";
}

int decreasing(int n){
if(n==1){
        cout<<"1"<<" ";
        return 1;
    }
    cout<<n<<" ";
    decreasing(n-1);
}
int main(){
    int n;
    cout<<"The size of n : ";
    cin>>n;
    increasing(n);
    cout<<endl;
    decreasing(n);


    return 0;
}