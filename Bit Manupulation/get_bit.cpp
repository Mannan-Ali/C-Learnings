#include<bits/stdc++.h>
using namespace std;

int getbit(int n,int i){
    return (n&(1<<i))!=0;
}

int main(){
    cout<<getbit(1010001,1);
    return 0;

}