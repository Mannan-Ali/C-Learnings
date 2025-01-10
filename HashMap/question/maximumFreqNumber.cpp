#include <bits/stdc++.h>
using namespace std;

// here we are asked to find the max freq and then return the max freq x how many times it appears
//  nums = [1, 2, 2, 3, 1, 4]
//  Frequencies:
//  plaintext
//  Copy code
//  1 -> 2, 2 -> 2, 3 -> 1, 4 -> 1
//  Maximum frequency:
//  plaintext
//  Copy code
//  maxFreq = 2
//  Elements with maxFreq are 1 and 2, contributing a total of 2 + 2 = 4.
int maxFrequencyElements(vector<int> &nums)
{
    unordered_map<int, int> m;
    int maxVal=INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        //if nothing then m[a] = 0;
        m[nums[i]]++;
        maxVal = max(maxVal,m[nums[i]]);
    }
    int count=0;
    for(auto i :m){
        if(i.second == maxVal){
            count++;
        }
    }
    return (maxVal*count);
}
int main()
{
    vector<int> nums = {1, 2, 2, 3, 1, 4};
    cout << maxFrequencyElements(nums);
    return 0;
}