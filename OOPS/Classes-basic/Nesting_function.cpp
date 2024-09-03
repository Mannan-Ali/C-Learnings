#include<bits/stdc++.h>
using namespace std;


class Binary{
    string s;
    public:
    void givedata(void){
        cout<<"Enter a binary number : ";
        cin>>s;
    }
    int chk_binary(void);

};

int Binary :: chk_binary(void){
    givedata();
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"The number is not binary"<<endl;
            return -1;
        }
    }cout<<"Number is binary"<<endl;
}
int main(){
    Binary num1;
    num1.chk_binary();
    return 0;
}