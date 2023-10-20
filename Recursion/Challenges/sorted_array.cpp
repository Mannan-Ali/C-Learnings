#include <bits/stdc++.h>
using namespace std;

bool sorted_arr(int n, int arr[])
{
    if(n==1){
        return true;
    }
    bool prev_check=sorted_arr(n-1,arr+1);
    if (arr[0] < arr[1] && prev_check){
        return true;
    }else{
        return false;
    }
}
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the values of array at INDEX " << i << " : ";
        cin >> arr[i];
    }
    cout << "The array is : \n[";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << "]" << endl;

    if (sorted_arr(n, arr))
    {
        cout << "The array is sorted";
    }
    else
    {
        cout << "The array is not sorted";
    }
    return 0;
}