#include <bits/stdc++.h> 
using namespace std;

int setbit(int n, int i)
{
    return (n | (1 << i));
}

int main()
{
    cout << setbit(12, 3);
    return 0;
}