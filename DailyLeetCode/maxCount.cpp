#include <bits/stdc++.h>
using namespace std;


/*
here we are to returnthe value equal to maxSum as close as possible to it using values 1 to n + they should not be in array 
now best way to check presence is using set so we used sets to check values that are in range of 1 to n and not in banned by using count
*/
int maxCount(vector<int> &banned, int n, int maxSum)
{
    unordered_set<int> s;
    //the reason we made set here is we wanted to check the presence
    int count = 0;
    for (int i = 0; i < banned.size(); i++)
    {
        //we do this because we will ahead iterate till n only and compare values in set that are in it till i only so there is no meaning in adding values more than n in set
        if(banned[i]<=n)
        {
            s.insert(banned[i]);
        }
    }
    if(s.empty()){
        cout<<"Empty";
    }
    for (auto i : s)
    {
        cout << i << " ";
    }
    int maxVal = 0;
    for (int i = 1; i <= n; i++)
    {
        if (s.count(i) == 0)
        {
            if (maxVal <= maxSum)
            {
                maxVal += i;
            }
            cout<<maxVal<<" ";
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> v = {11};
    cout<<maxCount(v, 7, 50);

    return 0;
}