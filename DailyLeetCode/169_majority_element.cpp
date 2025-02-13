#include<bits/stdc++.h>
using namespace std;

//my logic
// int majorityElement(vector<int>& nums) {
//     unordered_map<int,int> m;
//     int maxVal=0;
//     for(int i =0;i<nums.size();i++){
//         m[nums[i]]++;
//     }
//     for(auto &i:m){
//         if(i.second > nums.size()/2){
//             maxVal=i.first;
//             break;
//         }
//     }
//     return maxVal;
// }

int majorityElement(vector<int>& nums) {
    int ans = nums[0];
    int count = 1;
    for(int i=1;i<nums.size();i++){
        if(nums[i] == ans){
            count++;
        }else{
            count--;
            if(count == 0){
                ans = nums[i];
                count=1;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> nums ={2,2,1,1,1,2,2};
    cout<<majorityElement(nums);
    return 0;
}