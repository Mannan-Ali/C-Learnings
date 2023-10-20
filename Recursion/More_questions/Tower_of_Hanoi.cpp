#include <bits/stdc++.h>
using namespace std;

void TowerofHanoi(int n, char scr, char dest, char helper)
{
    if (n == 0)
    {
        return;
    }
    TowerofHanoi(n - 1, scr, helper, dest);
    cout << "Move from : " << scr << " - " << dest<< n <<endl;
    TowerofHanoi(n - 1, helper, dest, scr);


}
int main()
{
    TowerofHanoi(3, 'A', 'C', 'B');
    return 0;
}