#include<bits/stdc++.h>
using namespace std;


int main(){
    //creating 
    unordered_map<char,int> m;
    string s ="mannan";

    //insertion
    // pair<string,int> p1 = make_pair("mannan",1);
    // m.insert(p1);
    // //2
    // pair<string,int> p2("ali",2);
    // m.insert(p2);
    // //3
    // m["Shaikh"] = 3;

    // //now how to update an existing value 
    // m["mannan"] = 89;
    // //NOTE: undordeed_maps does not copy values

    // //unorderd_map does not store data in sorted manner or the way they were entered as we know the hash function used is such 
    // //but in ordered map we get the manner we put the values in or sorted manner
    // for(auto i : m ){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    // cout<<m.at("sujal");//will give error as no such key 
    // cout<<m["sujal"]<<" "<<endl; //this is same as above but here if not existed it will be initized as 0; and not throw error

    // cout<<m.size()<<endl;
    

    // //to check presence we do this
    // cout<<m.count("mann")<<endl;

    // //to delete : returns 1 if deleted ,0 when not deleted
    // // cout<<m.erase("ali")<<endl;

    // //using iterator
    // cout<<m.begin()->first;
    // unordered_map<string,int> :: iterator it = m.begin();
    // while(it !=m.end()){
    //     cout<<it->first << " " << it->second;
    //     it++;
    // }
    
    //     //future checking something 
    // for(int i = 0 ;i<s.length();i++){
    //     m[s[i]]++;
    // }
    // for(auto i : m){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    return 0;
}