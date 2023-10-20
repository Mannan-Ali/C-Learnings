// #include <bits/stdc++.h>
// using namespace std;
// template <class T>
// void merge(vector<int> &v, T s, T e, int mid)
// {
//     int len1 = mid - s + 1;
//     int len2 = e - mid;

//     vector<int> arr1(len1);
//     vector<int> arr2(len2);
//     int k = s;
//     // cout<<k<<endl;
//     for (int i = 0; i < len1; i++)
//     {
//         arr1[i] = v[k++];
//     }
//     //cout<<k<<endl;
//     k = mid + 1;
//     for (int i = 0; i < len2; i++)
//     {
//         arr2[i] = v[k++];
//     }
//     int i = 0, j = 0;
//     k = s;
//     while (i < len1 && j < len2)
//     {
//         if (arr1[i] < arr2[j])
//         {
//             v[k++] = arr1[i++];
//         }
//         else
//         {
//             v[k++] = arr2[j++];
//         }
//     }
//     while (i < len1)
//     {
//         v[k++] = arr1[i++];
//     }
//     while (j < len2)
//     {
//         v[k++] = arr2[j++];
//     }

// }
// template <class T>
// void divide(vector<int> &v, T s, T e)
// {
//     if (s < e)
//     {
//         int mid = s + (e - s) / 2;
//         divide(v, s, mid);
//         divide(v, mid + 1, e);

//         merge(v, s, e, mid);
//     }
// }
// int main()
// {
//     vector<int> v;
//     v = {1,4,0,432,443,1};
//     int n = 6;
//     divide(v, 0, n-1);
//     for (int i = 0; i < n; i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

void merge(int v[], int s, int e, int mid)
{
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *arr1 = (int *)malloc(len1 * sizeof(int));
    int *arr2 = (int *)malloc(len2 * sizeof(int));

    int k = s;
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = v[k++];
    }

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

    free(arr1);
    free(arr2);
}

void divide(int v[], int s, int e)
{
    if (s < e)
    {
        int mid = s + (e - s) / 2;
        divide(v, s, mid);
        divide(v, mid + 1, e);
        merge(v, s, e, mid);
    }
}

int main()
{
    int v[] = {5, 0, 1224, 0, 22, 22, 442};
    int n = 7;
    printf("Unsorted Array :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }printf("\n");

    divide(v, 0, n - 1);

    printf("Unsorted Array :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
