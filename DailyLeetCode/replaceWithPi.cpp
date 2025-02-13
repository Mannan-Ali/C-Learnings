#include<bits/stdc++.h>
using namespace std;

void replacePi(string s,int length){
    if(length >= s.length()){
        return;
    }
    if(s[length-1]=='p' && s[length] == 'i'){
        cout<<"3.14";
        return replacePi(s,length+2); //when double character then jump 2
    }else{
        cout<<s[length-1];
        return replacePi(s,length+1); //when normal character then jump 1;
    }

}

int main(){
    string s = "pip";
    replacePi(s,0);
    return 0;
}