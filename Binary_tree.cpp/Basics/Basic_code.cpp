#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        left = nullptr;
        right = nullptr;
        print();
    }
    void print(void)
    {
        cout << this->data<<endl;
    }
};
int main()
{
    Node *head = new Node(4);
    head->left = new Node(3);
    head->right = new Node(5);
    return 0;
}