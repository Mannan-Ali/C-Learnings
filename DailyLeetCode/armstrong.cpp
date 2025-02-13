#include<bits/stdc++.h>
using namespace std;

void armstrongNumber(int n)
{
    long armstrong = 0;
    // code here
    while (n != 0)
    {
        int lastDigit = n % 10;
        armstrong += lastDigit * lastDigit * lastDigit;
        n /= 10;
    }

    cout<<armstrong;
}

int main(){
    armstrongNumber(371);
    return 0;
}