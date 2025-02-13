#include <bits/stdc++.h>
using namespace std;

int minimumDeletions(vector<int> &nums)
{
 int n = nums.size();
        int maxValue = INT_MIN;
        int minValue = INT_MAX;
        int indexHighest = 0;
        int indexLowest = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] > maxValue) {
                maxValue = nums[i];
                indexHighest = i;
            }
            if (nums[i] < minValue) {
                minValue = nums[i];
                indexLowest = i;
            }
        }
        int fromFront = max(indexHighest, indexLowest) + 1;
        int fromBack =n-min(indexHighest, indexLowest);
        int fromBothSides = ((min(indexHighest, indexLowest) + 1) +(n-max(indexHighest, indexLowest)));
        return min(min(fromFront, fromBack), fromBothSides);
}

int main()
{
    vector<int> nums = {0, -4, 19, 1, 8, -2, -3, 5};
    cout << minimumDeletions(nums);
    return 0;
}