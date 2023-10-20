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
void Athead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void Attail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertatposition(Node *&tail, Node *&head, int position, int val)
{
    if (position == 1)
    {
        Athead(head, val);
        return;
    }
    Node *curr = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        curr = curr->next;
        cnt++;
    }
    if (curr->next == NULL)
    {
        Attail(tail, val);
        return;
    }
    Node *temp = new Node(val);
    temp->next = curr->next;
    curr->next->prev = temp;
    curr->next = temp;
    temp->prev = curr;
}

void deleteNode(Node * &tail,Node *&head, int position)
{
    if(head==NULL || head==NULL){
        cout<<"empty LL";
        return;
       
    }
    else if(head==tail){
        Node * temp = head;
        head=NULL;
        tail=NULL;
        delete temp;
        return;
        
    }
    else if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *pree = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            pree = curr;
            curr = curr->next;
            cnt++;
        }

        if (curr->next == NULL)
        {
            
            tail = pree;
        }

        cout<<pree->next->data<<endl;
        cout<<curr->next->prev->data<<endl;

        curr->prev = NULL;
        pree->next = curr->next;
        curr->next->prev = pree;
        
        cout<<curr->next->prev->data<<endl;
        curr->next = NULL;
        delete curr;
        cout<<pree->next->prev->data<<endl;
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
    Node *Node1 = new Node(1);
    Node *head = Node1;
    Node *tail = Node1;
    print(head);
    cout << "head tail" << " - " << head->data << " " << tail->data << endl;

    deleteNode(tail,head,1);
    print(head);
    cout<<head<<endl<<tail;



    return 0;
}