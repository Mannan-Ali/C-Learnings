#include <bits/stdc++.h>
using namespace std;

// my solution tle
//  long long countBadPairs(vector<int>& nums) {
//      int n = nums.size(), count = 0;
//      for (int i = 0; i < n - 1; i++) {
//          for (int j = i + 1; j < n; j++) {
//              if (j - i != nums[j] - nums[i]) {
//                  count++;
//              }
//          }
//      }
//      return count;
//  }

long long countBadPairs(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        if(m.count(nums[i]-i)){
            count += m[nums[i]-i];
        }
        m[nums[i]-i]++;
    }
    return ((n*(n-1))/2) - count;
}
int main()
{
    vector<int> nums ={1,2,3,4,5};
    cout<<countBadPairs(nums);
    return 0;
}