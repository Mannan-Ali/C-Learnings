#include<bits/stdc++.h>
using namespace std;


int maxDifference(string s) {
    unordered_map<char,int> m;
    for(int i =0;i<s.length();i++){
        m[s[i]]++;
    }
    int maxOddfreq =0;
    int maxEvenfreq =INT_MAX;
    for(auto &i:m){
        cout<<i.first<<" "<<i.second<<endl;
        if(i.second %2 == 0){
            maxEvenfreq = min(maxEvenfreq,i.second);
        }else{
            maxOddfreq = max(maxOddfreq,i.second);
        }
    }
    return (maxOddfreq - maxEvenfreq);

}

int main(){
    cout<<maxDifference("mmsmsym");
    return 0;
}