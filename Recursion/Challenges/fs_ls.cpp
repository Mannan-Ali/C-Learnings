#include <bits/stdc++.h>
using namespace std;

int focc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;
    }
    return focc(arr, n, i + 1, key);
}
int locc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        cout<<"-1first"<<" ";
        return -1;
    }
    int prev = locc(arr, n, i + 1, key);//-1
    if (prev != -1)
    {
        cout<<prev<<"sec"<<" ";
        return prev;
    }
    if (arr[i] == key)
    {
        cout<<i<<"rd"<<" ";
        return i;
    }else{
        cout<<"last--1"<<"  ";
        return -1;
    }
}
int main()
{
    int arr[]={3,3,1,2,4};
    // int n;
    // cout << "Enter the size of array : ";
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Enter the values of array at INDEX " << i << " : ";
    //     cin >> arr[i];
    // }
    // cout << "The array is : \n[";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << "  ";
    // }
    // cout << "]" << endl;

    // int key, i = 0;
    // cout << "Enter the number to search in array :";
    // cin >> key;
    //cout << focc(arr, n, i, key);
    locc(arr, 5, 0, 3);
    return 0;
}