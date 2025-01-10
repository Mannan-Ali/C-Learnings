#include <bits/stdc++.h>
using namespace std;

string frequencySort(string s)
{
    string result = "";
    int maxFreq = 0;
    unordered_map<char,int> m;
    priority_queue<pair<int,char>> pq;
    for(int i = 0 ;i<s.length();i++){
        m[s[i]]++;
    }
    for(auto i : m){
        pq.push({i.second,i.first});
    }
    while(!pq.empty()){
        result.append(pq.top().first,pq.top().second);
        pq.pop();
    }
    return result;
}

int main()
{
    string s = "tree";
    cout<<frequencySort(s);
    return 0;
}