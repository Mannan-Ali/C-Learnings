#include <bits/stdc++.h>
using namespace std;

class Bankdetails
{
    float interest_rate;
    int principal;
    int years;
    float returnvalue;

public:
    void printinfo(void);
    float converter(float r)
    {
        if (r >= 1)
        {
            r = r / 100;
        }
        return r;
    }
    Bankdetails() {}
    Bankdetails(int p, int y, float r)
    { // If rate is given in points
        principal = p;
        years = y;
        interest_rate = converter(r);
        returnvalue = principal;
        for (int i = 0; i < y; i++)
        {
            returnvalue *= (1 + interest_rate);
        }
    }
    Bankdetails(int p, int y, int r)
    { // If rate is given in percentage
        principal = p;
        years = y;
        interest_rate = float(r) / 100;
        returnvalue = principal;
        for (int i = 0; i < y; i++)
        {
            returnvalue *= (1 + interest_rate);
        }
    }
};

void Bankdetails::printinfo(void)
{
    cout << "the principal amount is " << principal << endl;
    cout << "the rate of interest is " << interest_rate << endl;
    cout << "the return value after " << years << " year is " << returnvalue << endl;
}

int main()
{
    int p, y;
    float r;
    int R;
    cin >> p >> y >> r >> R;
    Bankdetails bd1(p, y, r);
    bd1.printinfo();

    Bankdetails bd2(p, y, R);
    bd2.printinfo();
    return 0;
}
