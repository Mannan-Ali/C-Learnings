#include <bits/stdc++.h>
using namespace std;

class product
{
    int ItemID[100];
    float price[100];

public:
    int counter;
    // void initcounter(void){ counter = 0; }
    void setdata(void);
    void display(void);
};

void product::setdata(void)
{
    cin >> ItemID[counter];
    cin >> price[counter];
    counter++;
}

void product::display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << ItemID[i] << " " << price[i] << endl;
    }
}

int main()
{
    int n;
    cin>>n;
    product dukaan;
    dukaan.counter = 0;
    for(int i=0;i<n;i++){
        dukaan.setdata();
    }
    dukaan.display();
    return 0;
}