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
        front = -1;
        back = -1;
        arr = new int[s];
    }
    bool push(int val)
    {
        if (front == 0 && back == size - 1 || front != 0 && back == (front - 1) % (size - 1))
        {
            cout << "Queue is Full " << endl;
            return false;
        }
        else if (isempty())
        {
            front = back = 0;
        }
        else if (back == size - 1 && front != 0)
        {
            back = 0;
        }
        else
        {
            back++;
        }
        arr[back] = val;
        return true;
    }
    int pop()
    {
        if (isempty())
        {
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1;
        if (front == back)
        {
            front = back = -1;
        }
        else if(front==size-1){
            front=0;
        }
        else{
            front++;
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
        return front == -1;
    }
};
int main()
{

    Queue *q = new Queue(5);
    q->push(8);
    q->push(9);
    q->push(10);
    q->push(11);
    q->push(12);
    cout << q->Top() << endl;
    cout << q->pop() << endl;
    cout << q->Top() << endl;
    q->push(13);
    cout << q->pop() << endl;
    cout << q->pop() << endl;
    cout << q->pop() << endl;
    cout << q->pop() << endl;
    cout << q->Top() << endl;
    cout << q->pop() << endl;
    cout << q->pop() << endl;


    delete q;
    return 0;
}