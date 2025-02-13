#include<bits/stdc++.h>
using namespace std;

string clearDigits(string s) {
    string st;
    for(int i=0;i<s.size();i++){
        if((s[i]>='0' && s[i]<='9') && !st.empty() ){
            st.pop_back();
        }else{
            st.push_back(s[i]);
        }
    }
    return st;

}

int main(){
    return 0;
}