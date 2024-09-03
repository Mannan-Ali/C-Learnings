#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node * next;
    Node(int val){
        data=val;
        next=NULL;
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
void Athead(Node * &tail,Node * & head,int data){
    if(head==NULL){
    Node *temp=new Node(data);
    head=temp;
    tail=temp;
    return;
    }
    Node * temp= new Node(data);
    (*temp).next = head;
    //temp->next =head;   // (*temp).next = head;
    head=temp;
}
void Attail(Node * & tail, Node * &head,int data){
    if(tail==NULL){
    Node *temp=new Node(data);
    tail=temp;
    head=temp;
    return;
    }
    Node * temp= new Node(data);
    tail->next=temp;
    tail=temp;
}

void insertatposition(Node * &tail, Node *&head, int position, int val)
{
    if(head==NULL && tail==NULL){
        Node *temp=new Node(val);
        tail=temp;
        head=temp;
        return;
    }
    else if (position == 1)
    {
        Athead(tail,head, val);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position-1)
    {
        temp = temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        Attail(tail,head,val);
        return;
    }
    Node *nodetoinsert = new Node(val);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;

    
    
}

void print(Node *  &head){
    Node * notHead=head;
    while(notHead!=NULL){
        cout<<notHead->data<<" ";
        notHead=notHead->next;//notHead = (*notHead).next;
    }cout<<endl;
}
int main(){
    Node * head = NULL;
    Node * tail = NULL;

    insertatposition(tail,head,6,14);
    print(head);
    insertatposition(tail,head,2,50);
    print(head);
    insertatposition(tail,head,3,12);
    print(head);
    insertatposition(tail,head,4,13);
    print(head);

    delete head;



    return 0;

}