#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
    static int count=0;
    // 2^x = 2*2^2^x-1
    // base cases
    if (n == 0)
        return false;
    if (n == 1)
        return 1;
    if (n % 2 != 0) return false;
    count++;
    cout<<count<<" ";
    return isPowerOfTwo(n / 2);
}
// bool isPowerOfTwo(int n)
// {
//     static int count = 0;
//     // 2^x = 2*2^2^x-1
//     if (n == 1)
//         return 1;
//     if (n % 2 == 0)
//     {
//         count++;
//         cout << count << endl;
//         isPowerOfTwo(n / 2);
//     }
//     else
//     {
//         return false;
//     }
// }

int main()
{
    isPowerOfTwo(8);
    return 0;
}