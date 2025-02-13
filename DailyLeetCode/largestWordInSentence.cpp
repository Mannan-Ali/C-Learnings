#include<bits/stdc++.h>
using namespace std;

string largestWord(string s){
    string word ="";
    string largest ="";
    int length = 0;
    int maxLength = 0;
    for(int i =0;i<s.length();i++){
        if(s[i]!=' ' && s[i] != '\0'){
            length++;
            word+=s[i];
        }else{
            if (length > maxLength) { // Update max word
                maxLength = length;
                largest = word;
            }
            word= "";
            length =0;
        }
    }
    if(length > maxLength) {
        maxLength = length;
        largest = word;
    }
    cout<<word<<endl;
    cout<<maxLength<<endl;

}
int main(){
    largestWord("Hey what is yout fwefwefewe");
    return 0;
}