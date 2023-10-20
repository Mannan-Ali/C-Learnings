#include<bits/stdc++.h>
using namespace std;


string duplicates(string s){
    if(s.length()==0){
        return ""; 
    }
    char c=s[0];
    string prev=duplicates(s.substr(1));
    if(c==prev[0]){
        return prev;
        
    }
    return c+prev;

}
int main(){
    cout<<duplicates("mannanman");
    return 0;
}