#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int arry[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arry[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arry[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size - 1; i++)

    {
        int current=i;
        for (int j = i + 1; j < size; j++)
        {
            current=j;
            if (arry[j] < arry[i])
            {
                int temp = arry[j];
                arry[j] = arry[i];
                arry[i] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arry[i] << " ";
    }
    return 0;
}