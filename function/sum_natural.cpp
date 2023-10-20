#include<iostream>
using namespace std;

int sum(int num){
    int sum=0;
    for(int i=0;i<=num;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}