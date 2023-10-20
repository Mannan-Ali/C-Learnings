#include<bits/stdc++.h>
#include<climits>
using namespace std;

int main(){
    string s;
    cin>>s;
    int lower[26]={};
    int upper[26]={};
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            lower[s[i]-'a']++;
        }if(s[i]>='A' && s[i]<='Z'){
            upper[s[i]-'A']++;
        }
    }
    int maxCount=0;
    char maxChar='\0';
    for(int i=0;i<26;i++){
        if(lower[i]>maxCount){
            maxCount=lower[i];
            maxChar=i+'a';
        }
        if(upper[i]>maxCount){
            maxCount=upper[i];
            maxChar=i+'A';
        }
    }
    cout<<maxChar<<endl;
    cout<<maxCount<<endl;

    return 0;
}