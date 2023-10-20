#include <bits/stdc++.h>
using namespace std;

int changecalc(int n)
{
    string binaryResult = bitset<8>(n).to_string();
    cout << "Result in binary: " << binaryResult << endl;
    int cnt = 0;
    while (n > 0)
    {
        cnt += n & 1;
        n >>= 1;
    }
    return cnt;
}

int XOR(int bit1, int bit2)
{
    return changecalc(bit1 ^ bit2);
}
int main()
{
    int num1, num2;
    cout << "Enter the numbers for operations 1: ";
    cin >> num1;
    cout << "Enter the numbers for operations 2: ";
    cin>>num2;

    string bit1= bitset<8>(num1).to_string();
    cout << "Result in binary: " << bit1 << endl;

    string bit2 = bitset<8>(num2).to_string();
    cout << "Result in binary: " << bit2 << endl;

    cout <<"The total numbers of bits to change is : "<< XOR(num1, num2)<<endl;
    return 0;
}