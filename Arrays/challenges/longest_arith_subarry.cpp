#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 2;
    int mx = 2;
    int pd = a[1] - a[0];
    for (int i = 1; i < n - 1; i++)
    {
        if (pd == a[i + 1] - a[i])
        {
            count++;
            mx = max(mx, count);
        }
        else
        {
            count = 2;
            pd = a[i + 1] - a[i];
        }
    }
    cout << mx;

    return 0;
}