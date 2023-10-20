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

void insertatposition(Node *&tail, int element, int val)
{
    if (tail == NULL)
    {
        Node *temp = new Node(val);
        tail = temp;
        temp->next = temp;
        return;
    }
    else
    {
        Node * curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }
        cout<<"{"<<curr->data<<"}";
        Node *temp = new Node(val);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node * &tail)
{
    Node *temp = tail;
    do
    {
        cout << tail->data<<" ";
        tail = tail->next;
    } while (tail != temp);
    cout<<endl;
}
int main()
{
    Node *tail = NULL;

    insertatposition(tail, 1, 10);
    print(tail);
    insertatposition(tail, 10, 13);
    print(tail);
    insertatposition(tail, 13, 14);
    print(tail);
    insertatposition(tail, 14, 15);
    print(tail);
    

    return 0;
}