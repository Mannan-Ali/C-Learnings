#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int *arr;
    int front, back, size;

public:
    ~Queue()
    {
        cout << "The array is now deleted";
        delete[] arr;
    }

    Queue(int s)
    {
        size = s;
        front = 0;
        back = 0;
        arr = new int[s];
    }
    void push(int val)
    {
        if (back == size)
        {
            cout << "Queue is Full " << endl;
            return;
        }
        else
        {
            arr[back] = val;
            back++;
        }
    }
    int pop()
    {
        if (isempty())
        {
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        front++;
        if (front == back)
        {
            // Reset front and back indices when the queue becomes empty
            front = 0;
            back = 0;
        }
        return ans;
    }
    int Top()
    {
        if (isempty())
        {
            return -1;
        }
        return arr[front];
    }

    bool isempty()
    {
        return front == back;
    }
};
int main()
{

    Queue *q = new Queue(5);
    q->push(8);
    cout << q->Top() << endl;
    q->push(9);
    q->push(10);
    q->push(11);
    q->push(11);
    cout << q->Top() << endl;
    cout << q->pop() << endl;
    cout << q->pop() << endl;
    cout << q->pop() << endl;
    cout << q->pop() << endl;

    if (q->isempty())
    {
        cout << "empty";
    }
    delete q;
    return 0;
}