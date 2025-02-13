#include<bits/stdc++.h>
using namespace std;

bool validPalindrome(string s){

    string converted="";
    for(int i=0;i<s.length();i++){
        // if((s[i]>= 'a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
        if(isalnum(s[i])){
            converted.push_back(tolower(s[i]));
        }
    }
    cout<<converted;
    cout<<converted.length();
    int start=0;
    int end = converted.length()-1;
    while(start <= end){
        if(converted[start]  != converted[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main(){

    cout<<validPalindrome("0P");
    return 0;
}