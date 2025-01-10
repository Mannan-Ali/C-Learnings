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
//bringing a node to its right place 
void heapify(int arr[], int size, int i)
{
    int largest = i;
    int leftChild = 2 * i;
    int rightChild = 2 * i + 1;
    if (leftChild < size && arr[largest] < arr[leftChild])
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
int main()
{
    Heap h;
    int array[7] = {-1,10,15,21,30,18,19};
    int n = 6;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(array,n,i);
    }
    cout<<"Printing Array : ";
    for(int i = 1;i<=n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
//reason for t.c to be O(n)
/*
The Process of Building the Heap
When you build a heap, you're calling heapify on nodes starting from the last non-leaf node (which is at n/2 for a 1-based array) and moving up to the root.

You might think that since you’re looping from n/2 to 1, this would result in O(n/2) iterations, and each iteration is O(log n) (since heapify takes O(log n) time). But this is not correct when you add up the total work done. Let me explain why.

Heapify Complexity Breakdown
heapify is called on each node, and the time it takes depends on the height of the node in the tree:

For nodes at the leaves (bottom levels):
These nodes don't have any children (or just have one), so heapify takes O(1) time for these nodes.

For nodes in the middle levels:
Nodes in the middle levels have one or two children, so heapify takes O(log n) time for these nodes.

For nodes near the root:
Nodes near the root have the largest subtrees, so heapify will take the most time, up to O(log n).

Total Work Done
The key insight is that not every node requires O(log n) work. The amount of work depends on how deep the node is in the tree.

Level 0 (root): 1 node, O(log n) work
Level 1: 2 nodes, each requires O(log n - 1) work (which is O(log n) in the worst case)
Level 2: 4 nodes, each requires O(log n - 2) work (which is still O(log n) for large n)
.
.
.
Why Total Complexity is O(n)
Even though you loop from n/2 to 1, the time complexity is not simply O(n/2) × O(log n), because the time complexity per node depends on its level in the tree. Here's the crucial part:

Nodes near the bottom require much less work.
Nodes near the top require more work.
The number of nodes at each level grows exponentially as you go down the tree, but the amount of work decreases.

So, when we sum the total work done by all heapify calls:

Level 0: 1 node × O(log n) = O(log n)
Level 1: 2 nodes × O(log n - 1) = O(log n) (for large n, it's still O(log n))
Level 2: 4 nodes × O(log n - 2) = O(log n)
...

If you add up the work across all levels, it sums up to O(n).
T(n)=1⋅O(logn)+2⋅O(logn−1)+4⋅O(logn−2)+…
This series simplifies to O(n) because the number of nodes increases exponentially, while the depth (and therefore the work required for each node) decreases linearly.

Why Doesn't It Take O(n log n)?
Even though each heapify might take O(log n) in the worst case, the number of nodes that require O(log n) work is small (just the root node). The vast majority of nodes (the leaf nodes) only need O(1) time. Therefore, the overall time complexity is O(n), not O(n log n).

In Summary:
Heapify on each node takes O(log n) time in the worst case.
The number of nodes at each level increases exponentially, and the amount of work decreases as we move to the bottom.
The total work done by heapify across all nodes adds up to O(n), despite the loop running from n/2 to 1.
*/