#include <bits/stdc++.h>
using namespace std;


//34 question
void firstOccurance(vector<int> &nums, int target, int start, int end, int &ans)
{
    int mid = start + (end - start) / 2;
    if (start > end)
        return;

    if (nums[mid] == target)
    {
        ans = mid;
        firstOccurance(nums, target, start, mid - 1, ans);
    }
    else if (nums[mid] > target)
    {
        firstOccurance(nums, target, start, mid - 1, ans);
    }
    else
    {
        firstOccurance(nums, target, mid + 1, end, ans);
    }
}
void lastOccurance(vector<int> &nums, int target, int start, int end, int &ans)
{
    int mid = start + (end - start) / 2;
    if (start > end)
        return;

    if (nums[mid] == target)
    {
        ans = mid;
        lastOccurance(nums, target, mid + 1, end, ans);
    }
    else if (nums[mid] > target)
    {
        lastOccurance(nums, target, start, mid - 1, ans);
    }
    else
    {
        lastOccurance(nums, target, mid + 1, end, ans);
    }
}
vector<int> searchRange(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int ansFirst = -1;
    int ansSecond = -1;
    firstOccurance(nums, target, start, end, ansFirst);
    lastOccurance(nums, target, start, end, ansSecond);

    return {ansFirst, ansSecond};
}

int main()
{
    vector<int> nums = {5,7,7,8,8,10};
    searchRange(nums,8);
    return 0;
}