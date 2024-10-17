#include <bits/stdc++.h>
using namespace std;

class Binary
{
    string s;
    void givedata(void)
    {
        cout << "Enter a binary number : ";
        cin >> s;
    }

public:
    bool chk_binary(void);
};

bool Binary ::chk_binary(void)
{
    givedata();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            return false;
        }
    }
    return true;
}


int main()
{
    Binary num1;
    if(num1.chk_binary()){
        cout<<"The number is binary"<<endl;
    }else{
        cout<<"The number is not binary"<<endl;
    }
    return 0;
}