#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};
void Athead(Node *&tail, Node *&head, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
        return;
    }
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void Attail(Node *&tail, Node *&head, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        head = temp;
        return;
    }

    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
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
    else
    {
        Node *curr = head;
        int cnt = 1;
        while (cnt < position - 1)
        {
            curr = curr->next;
            cnt++;
        }

        cout << "Value of count = " << cnt << endl;
        cout << "Value of curr = " << curr->data << endl;

        if (curr->next == NULL)
        {
            Attail(tail, head, val);
            return;
        }
        Node *temp = new Node(val);
        temp->next = curr->next;
        curr->next->prev = temp;
        curr->next = temp;
        temp->prev = curr;
    }
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

int main()
{

    Node * head = NULL;
    Node * tail = NULL;
    // Athead(tail,head,3);
    // cout << "head tail" << head->data << " " << tail->data << endl;
    // print(head);
    insertatposition(tail, head, 3, 5);
    print(head);

    return 0;
}