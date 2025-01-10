#include <bits/stdc++.h>
using namespace std;

bool canChange(string start, string target)
{
    for (int i = 0; i < start.length(); i++)
    {
        for (int j = 0; j <= target.length(); j++)
        {
            if (start[j] == '_' && start[j + 1] == 'L')
            {
                swap(start[j],start[j+1])
            }
        }
    }
}

int main()
{
    string str1 = "_L__R__R_";
    string str2 = "L______RR";
    canChange(str1, str2);
    return 0;
}