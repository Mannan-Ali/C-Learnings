#include<bits/stdc++.h>
using namespace std;

void replace_pi(string n){
    if(n.length()==0){
        return;
    }
    if(n[0]=='p' && n[1]=='i'){
        cout<<"3.14";
        replace_pi(n.substr(2));
    }else{
        cout<<n[0];
        replace_pi(n.substr(1));
    }
}

int main(){
    string name;
    cout<<"Enter the string : ";
    cin>>name;
    replace_pi(name);
    return 0;
}
