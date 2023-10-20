#include<bits/stdc++.h>
using namespace std;


string Move_x(string s){
    if(s.length()==0){
        return ""; 
    }
    char c=s[0];
    string prev=Move_x(s.substr(1));
    if(c=='x'){
        return prev+c;
        
    }
    return c+prev;

}
int main(){
    cout<<Move_x("mannxxanman");
    return 0;
}