#include<bits/stdc++.h>
using namespace std;

int clearbit(int n,int i){
   int mask=~(1<<i);
    return (n&mask);
}

int main(){
    int result=clearbit(9,3);
    cout<<result;
    string binaryResult = bitset<8>(result).to_string();
    cout << "Result in binary: " << binaryResult << endl;

    return 0;

}