#include <bits/stdc++.h>
using namespace std;

class Heap
{
    vector<int> arr;
    long size;

public:
    Heap()
    {
        arr.push_back(-1);
        size = 0;
    }
    void insert(int val);
    void print(void);
    void deleteHeap(void);
};

void Heap ::insert(int val)
{
    size = size + 1;
    long index = size;
    arr.push_back(val);
    while (index > 1)
    {
        long parent = index / 2;
        if (arr[parent] < arr[index])
        {
            swap(arr[parent], arr[index]);
            index = parent;
        }
        else
        {
            return;
        }
    }
}

void Heap ::print(void)
{
    for (long i = 1; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void heapify(int arr[], int size, int i)
{
    int largest = i;
    int leftChild = 2 * i;
    int rightChild = 2 * i + 1;
    if (leftChild <= size && arr[largest] < arr[leftChild])
    {
        largest = leftChild;
    }
    if (rightChild <= size && arr[largest] < arr[rightChild])
    {
        largest = rightChild;
    }
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, size, largest);
    }
}

void heap_sort(int arr[], int s)
{
    int size = s;
    while (size > 1)
    {
        swap(arr[1], arr[size--]);
        heapify(arr, size, 1);
    }
}

int main()
{
    Heap h;
    int array[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(array, n, i);
    }
    cout << "Printing Array : " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << array[i] << " ";
    }cout<<endl;
    cout << "Printing Array after Heap Sort : "<<endl;
    heap_sort(array, n);
    for (int i = 1; i <= n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}