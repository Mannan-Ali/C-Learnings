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
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL && next != this)
        {

            delete next;
            this->next = NULL;
        }

        cout << "Memory is free for the node : " << value << endl;
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
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node *temp = new Node(val);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node *&tail, int element)
{
    if (tail == NULL)
    {
        cout << "empy" << endl;
        return;
    }
    Node *prev = tail;
    Node *curr = prev->next;
    while (curr->data != element)
    {
        prev = curr;
        curr = curr->next;
    }
    if (curr == prev)
    {
        tail = NULL;
        prev->next = NULL;
        curr->next = NULL;
        delete curr;
        return;
    }
    if (tail == curr)
    {
        tail = tail->next;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

void print(Node *tail)
{
    if (tail == NULL)
    {
        cout << "empty LL" << endl;
        return;
    }
    Node *temp = tail;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
    cout << endl;
}
int main()
{
    Node *tail = NULL;

    deleteNode(tail, 10);
    print(tail);

    return 0;
}