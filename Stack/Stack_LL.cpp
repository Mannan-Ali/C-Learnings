#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Stack
{
    // Node *head;
    // int size;

public:
    Node * head;
    int size;
    Stack()
    {
        head = NULL;
        size = 0;
    }
    void push(int v)
    {
        Node *temp = new Node(v);
        temp->next = head;
        head = temp;
        size++;
    }
    int pop()
    {
        if (isempty())
            return -1;

        int res = head->data;
        Node *temp = head;
        head = head->next;
        size--;
        delete temp;
        return res;
    }
    bool isempty()
    {
        return head == nullptr;
    }
    int Top()
    {
        if (isempty())
        {
            return -1;
        }
        return head->data;
    }
};
int main()
{
    Stack *st = new Stack();
    st->push(5);
    cout << st->Top();
    st->push(4);
    cout << st->Top();
    st->push(3);
    cout << st->Top();
    st->push(2);
    cout << st->Top();
    st->push(1);
    cout << st->Top()<<endl;
    st->pop();
    cout << st->Top();
    st->pop();
    cout << st->Top();
    st->pop();
    cout << st->Top();
    st->pop();
    cout << st->Top();
    if(st->isempty()){
        cout<<"Empty Stack";
    }

    return 0;
}