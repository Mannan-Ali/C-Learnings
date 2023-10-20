#include<bits/stdc++.h>
using namespace std;

string getbit(int n,int pos,int val){
    int mask=~(1<<pos);
    int b=n & mask;
    int mainans = (n|(val<<pos));
    string binaryResult = bitset<8>(mainans).to_string();
    return binaryResult;
}

int main(){
    cout<<bitset<8>(5).to_string()<<endl;
    cout<<getbit(5,1,1);
    return 0;

}