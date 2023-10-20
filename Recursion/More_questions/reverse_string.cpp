#include<bits/stdc++.h>
using namespace std;

void reverse_string2(string a){
    if(a.length()==0){
        return; 
    }
    string s=a.substr(1);
    reverse_string2(s);
    cout<<a[0];

}


string reverse_string(string a,int n,int i){
    if(i==0){
        return string(1,a[i]); 
    }

    return a[i]+reverse_string(a,n,i-1);
}
int main(){
    string name;
    cout<<"Enter the string : ";
    cin>>name;

    //cout<<reverse_string(name,name.size(),name.size());
    reverse_string2(name);

    return 0;
}