#include <bits/stdc++.h>
using namespace std;

// method 1: brute force
/*
int maximumSubArraySum(vector<int> arr){
    int maxVal = INT_MIN;
    for(int i=0;i<arr.size();i++){
        for(int j = i;j<arr.size();j++){
            int sum =0;
            for(int k=i;k<=j;k++){
                sum += arr[k];
            };
            maxVal = max(sum,maxVal);
        }
    }
    return maxVal;
}
*/

// method 2: cumalative sum approach
// a]
// int maximumSubArraySum(vector<int> nums){
//     int maxVal = INT_MIN;
//     for (int i = 0; i < nums.size(); i++) {
//         int sum = 0;
//         for (int j = i; j < nums.size(); j++) {
//             sum += nums[j];
//             maxVal = max(sum, maxVal);
//         }
//     }
//     return maxVal;
// }

//b]
// int maximumSubArraySum(vector<int> nums)
// {
//     // store cumalative sum
//     int n = nums.size();
//     vector<int> copyVal(n + 1, 0);

//     for (int i = 1; i <= n; i++)
//     {
//         copyVal[i] = copyVal[i - 1] + nums[i - 1];
//     }

//     for (int i = 0; i < copyVal.size(); i++)
//     {
//         cout << copyVal[i] << " ";
//     }

//     int maxVal = INT_MIN;
//     for (int i = 1; i <=nums.size(); i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < i; j++)
//         {
//             sum = copyVal[i] - copyVal[j];
//             maxVal = max(sum, maxVal);
//         }
//     }
//     return maxVal;
// }

//kanades algorithm
int maximumSubArraySum(vector<int>& nums) {
    int maxVal = INT_MIN;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        maxVal = max(sum, maxVal);
        if (sum < 0) {
            sum = 0;
        }
    }
    return maxVal;
}
int main()
{
    vector<int> arr = {-1, 4, 7, 2};
    cout<<maximumSubArraySum(arr);
    return 0;
}