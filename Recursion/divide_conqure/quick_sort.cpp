// #include <bits/stdc++.h>
// using namespace std;

// int partition(vector<int> &v, int s, int e)
// {
//     int pivot = v[s];
//     int count = 0;
//     for (int i = s + 1; i <= e; i++)
//     {
//         if (v[i] <= pivot)
//         {
//             count++;
//         }
//     }
//     int mainIndex = s + count;
//     swap(v[mainIndex], v[s]);
//     int i = s, j = e;
//     while (i < mainIndex && j > mainIndex)
//     {
//         while (v[i] <=pivot)
//         {
//             i++;
//         }
//         while (v[j] > pivot)
//         {
//             j--;
//         }
//         if (i < mainIndex && j > mainIndex)
//         {
//             swap(v[i++], v[j--]);
//         }
//     }
//     return mainIndex;
// }

// void quicksort(vector<int> &v, int s, int e)
// {
//     if (s < e)
//     {
//         int p = partition(v, s, e);
//         quicksort(v, s, p - 1);
//         quicksort(v, p + 1, e);
//     }
// }
// int main()
// {
//     vector<int> v;
//     v = {0, 2, 90, 23, 5, 4, 3,4};
//     int n = 8;
//     quicksort(v, 0, n - 1);
//     for (int i = 0; i < n; i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

#include <stdio.h>

int partition(int v[], int s, int e) {
    int pivot = v[s];
    int count = 0;

    for (int i = s + 1; i <= e; i++) {
        if (v[i] <= pivot) {
            count++;
        }
    }

    int mainIndex = s + count;
    int temp = v[mainIndex];
    v[mainIndex] = v[s];
    v[s] = temp;

    int i = s, j = e;
    while (i < mainIndex && j > mainIndex) {
        while (v[i] <= pivot) {
            i++;
        }
        while (v[j] > pivot) {
            j--;
        }

        if (i < mainIndex && j > mainIndex) {
            temp = v[i];
            v[i++] = v[j];
            v[j--] = temp;
        }
    }

    return mainIndex;
}

void quicksort(int v[], int s, int e) {
    if (s < e) {
        int p = partition(v, s, e);
        quicksort(v, s, p - 1);
        quicksort(v, p + 1, e);
    }
}

int main() {
    int v[] = {0, 90, 23, 5, 4, 4};
    int n = 6;
    
    printf("Unsorted Array :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }printf("\n");
    quicksort(v, 0, n - 1);

    printf("Sorted Array :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
