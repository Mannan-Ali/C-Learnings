#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="My name is Mannan Ali";
    for(int i=0;i<str.length();i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]-=32;
        }
    }cout<<str<<endl;
    return 0;

}