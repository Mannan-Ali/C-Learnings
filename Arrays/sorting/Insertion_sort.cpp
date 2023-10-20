#include <bits/stdc++.h>
using namespace std;

void insertionsort(int arr[], int n)
{
    int i, key, j;
    for (int i = 0; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int n;
    cout<<"Size of Array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Value at position "<<i<<" : ";
        cin >> arr[i];
    }
    insertionsort(arr,n);
    cout<<"Sorted Array using Insertion Sort is : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}