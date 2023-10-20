#include <bits/stdc++.h>
using namespace std;
template <class T>
long long merge(vector<int> &v, T s, T e, int mid)
{
    long long inv=0;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    vector<int> arr1(len1);
    vector<int> arr2(len2);
    int k = s;
    // cout<<k<<endl;
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = v[k++];
    }
    //cout<<k<<endl;
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = v[k++];
    }
    int i = 0, j = 0;
    k = s;
    while (i < len1 && j < len2)
    {
        if (arr1[i] < arr2[j])
        {
            v[k++] = arr1[i++];
        }
        else
        {
            v[k++] = arr2[j++];
            inv+=len1-i;
        }
    }
    while (i < len1)
    {
        v[k++] = arr1[i++];
    }
    while (j < len2)
    {
        v[k++] = arr2[j++];
    }
    return inv;
    
}
template <class T>
long long divide(vector<int> &v, T s, T e)
{
    long long inv=0;
    if (s < e)
    {
        int mid = s + (e - s) / 2;
        inv+=divide(v, s, mid);
        inv+=divide(v, mid + 1, e);

        inv+=merge(v, s, e, mid);
    }
    return inv;
}
int main()
{
    vector<int> v;
    v = {3,5,6,9,1,2,7,8};
    int n = 8;
    cout<<divide(v, 0, n-1)<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    
    cout << endl;

    return 0;
}