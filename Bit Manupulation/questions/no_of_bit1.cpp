#include <bits/stdc++.h>
using namespace std;

int cnt_bit(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        cnt += n & 1;
        n>>=1;
    }
    return cnt;
}

int main()
{
    int num1, num2;
    cout << "Enter the numbers for operations 1: ";
    cin >> num1;

    string bit1 = bitset<8>(num1).to_string();
    cout << "Result in binary: " << bit1 << endl;

    cout << "The total numbers of bits to change is : " << cnt_bit(num1) << endl;
    cout<<"Do you wish to cotinue (yes,no): ";
    string input;
    cin>>input;
    if(input=="yes"){
        main();
    }
    return 0;
}