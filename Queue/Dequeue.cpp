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
    bool push_back(int val)
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
    bool push_front(int val)
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
        else if (front == 0 && back !=size -1)
        {
            front = size -1;
        }
        else
        {
            front--;
        }
        arr[front] = val;
        return true;
    }
    int pop_front()
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
    int pop_back()
    {
        if (isempty())
        {
            return -1;
        }
        int ans=arr[back];
        arr[back]=-1;
        if (front == back)
        {
            front = back = -1;
        }
        else if(back== 0){
            back=size-1;
        }
        else{
            back--;
        }
        return ans;
    }
    int Front()
    {
        if (isempty())
        {
            return -1;
        }
        return arr[front];
    } 
    int Back()
    {
        if (isempty())
        {
            return -1;
        }
        return arr[back];
    }

    bool isempty()
    {
        return front == -1;
    }
};
int main()
{

    Queue *q = new Queue(5);
    q->push_back(8);
    cout<<q->Front()<<" ";
    cout<<q->Back()<<" ";

    cout<<endl;

    q->push_back(9);
    cout<<q->Front()<<" ";
    cout<<q->Back()<<" ";

    cout<<endl;

    q->push_front(10);
    cout<<q->Front()<<" ";
    cout<<q->Back()<<" ";

    cout<<endl;

    q->push_front(11);
    cout<<q->Front()<<" ";
    cout<<q->Back()<<" ";

    cout<<endl;

    cout<<q->pop_front();
    cout<<q->Front()<<" ";
    cout<<q->Back()<<" ";

    cout<<endl;
    cout<<q->pop_back();
    cout<<q->Front()<<" ";
    cout<<q->Back()<<" ";

    cout<<endl;

    delete q;
    return 0;
}