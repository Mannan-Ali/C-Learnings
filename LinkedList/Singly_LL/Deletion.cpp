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

        if (this->next != NULL)
        {

            delete next;

            this->next = NULL;
        }

        cout << "Memory is free for the node : " << value << endl;
    }
};
void Athead(Node *&tail, Node *&head, int data)
{
    Node *temp = new Node(data);
    (*temp).next = head;
    // temp->next =head;   // (*temp).next = head;
    head = temp;
}
void Attail(Node *&head, Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertatposition(Node *&tail, Node *&head, int position, int val)
{
    if (head == NULL && tail == NULL)
    {
        Node *temp = new Node(val);
        tail = temp;
        head = temp;
        return;
    }
    else if (position == 1)
    {
        Athead(tail, head, val);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        Attail(tail, head, val);
        return;
    }
    Node *nodetoinsert = new Node(val);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

void print(Node *&head)
{
    Node *notHead = head;
    while (notHead != NULL)
    {
        cout << notHead->data << " ";
        notHead = notHead->next; // notHead = (*notHead).next;
    }
    cout << endl;
}

void Delete(Node *&tail, Node *&head, int position)
{
    if (head == NULL || tail == NULL)
    {
        cout << "empty LL";
    }
    else if (head == tail)
    {
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }
    else if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        if (curr->next == NULL)
        {

            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    print(head);
    insertatposition(tail, head, 1, 10);
    print(head);
    insertatposition(tail, head, 2, 134);
    print(head);

    Delete(tail, head, 1);
    //print(head);

    delete head;
    return 0;
}