#include <bits/stdc++.h>
using namespace std;


//my approach 
// int removeElement(vector<int>& nums, int val) {
//     vector<int> numVal;
//     for(int i =0 ;i< nums.size();i++){
//         if(nums[i] != val){
//             numVal.push_back(nums[i]);
//         }
//     }
//     nums = numVal;
//     return nums.size();
// }

// int removeElement(vector<int> &nums,int val)
// {
    // int i = 0;
    // int j = nums.size()-1;
    // int count=0;
    // while(i <= j){
    //     if(nums[j]==val){
    //         j--;
    //         count++;
    //     }
    //     if(nums[i] == val){
    //         int temp = nums[i];
    //         nums[i] = nums[j];
    //         nums[j] = temp;
    //     }
    //     i++;

    // }
    // return nums.size()-count;
// }
//best approach till now here 
int removeElement(vector<int>& nums, int val) {

    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[count] = nums[i];
            count++;
        }
    }
    return count;
}


int main()
{
    vector<int> nums = {3,2,2,3};
    cout<<removeElement(nums,3)<<endl;
    for(int j=0;j<nums.size();j++){
        cout<<nums[j]<<" ";
    }
}