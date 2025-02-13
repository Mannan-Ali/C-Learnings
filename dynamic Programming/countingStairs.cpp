#include <bits/stdc++.h>
using namespace std;

int memoization(int n, vector<int> &dp)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    dp[n] = memoization(n - 1, dp) + memoization(n - 2, dp);
    return dp[n];
}
int climbStairs(int n)
{
    vector<int> dp(n + 1, -1);
    return memoization(n, dp);
}

int main()
{
    cout<<climbStairs(7);
    return 0;
}