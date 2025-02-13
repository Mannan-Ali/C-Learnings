#include <bits/stdc++.h>
using namespace std;

// using top down approach :
int fib(int n, vector<int> dp)
{
    // base case
    if (n == 1 || n == 0)
    {
        return n;
    }

    // return fib(n-1,dp)+fib(n-2,dp);
    // instead of this :
    // step 3: check if dp[n] !=-1 then return
    if (dp[n] != -1)
    {
        return dp[n];
    }
    // step 2: store the value corrosponding to the nth value, which is index in vectors
    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
}

// TC : O(n)
// SC :
int main()
{
    int n;
    cin >> n;
    // Top down approach
    //  step1: create 1D table to store values
    //  vector<int> dp(n+1,-1);
    //  cout<<fib(n,dp)<<endl;

    // BOTTOM UP APPROACH
    //  vector<int> dp(n+1);
    //  dp[0]=0;
    //  dp[1]=1;
    //  for(int i = 2;i<=n;i++){
    //      dp[i]= dp[i-1] + dp[i-2];
    //  }
    //  cout<<dp[n];

    // OPTIMIZED BOTTOM UP APPROACH
    // extra needed

    int prev1 = 0;
    int prev2 = 1;

    for (int i = 2; i <= n; i++)
    {
        if (n == 0)
        {
            cout << prev1;
            break;
        }
        int curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }
    cout << prev2;
    return 0;
}