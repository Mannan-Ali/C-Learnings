#include <bits/stdc++.h>
using namespace std;

//class Queue;
class Node{
    int data;
    Node * next;
    friend class Queue;
    public:
    Node(int val){
        this->data=val;
        next=nullptr;
    }
    ~Node(){
    int value = this->data;

        if (this->next != NULL)
        {

            delete next;

            this->next = NULL;
        }

        cout << "Memory is free for the node : " << value << endl;
    }
};
class Queue
{
    Node *head;
    Node * tail; 
    int size=0;

public:
    ~Queue()
    {
        cout<<"Queue is now deleted"<<endl;
        delete head;
    }

    Queue()
    {
        head = nullptr;
        tail = nullptr;
    }
    void push(int val)
    {
        Node * newnode= new Node(val);
        if (head==nullptr)
        {
            head=tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
    }
    void value(){
        cout<<"The value of head is : "<<head->data<<endl<<"The value of tail is : "<<tail->data<<" "<<endl;
    }
    int pop()
    {
        if (isempty())
        {
            return -1;
        }
        int ans = head->data;
        Node * temp =head;
        head=head->next;
        temp->next=nullptr;
        delete temp;
        return ans;
    }
    int Top()
    {
        if (isempty())
        {
            return -1;
        }
        return head->data;
    }

    bool isempty()
    {
        return head==nullptr;
    }
};
int main()
{

    Queue * q=new Queue();
    q->push(21);
    q->push(22);
    cout<<q->Top()<<endl;
    q->push(23);
    q->push(24);
    q->push(25);
    cout<<q->Top()<<endl;
    q->value();
    q->pop();
    q->value();
    q->pop();
    q->value();

    delete q;

    return 0;
}