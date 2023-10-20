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
    }
    // void print(void)
    // {
    //     cout << this->data<<endl;
    // }
    void levelOrderTraversal(Node *root)
    {
        queue<Node *> q;
        q.push(root);
        q.push(nullptr);
        while (!q.empty())
        {
            Node *temp = q.front();
            q.pop();

            if (temp ==nullptr)
            {
                cout << endl;
                if (!q.empty())
                {
                    q.push(nullptr);
                }
            }
            else
            {
                cout << temp->data <<" ";
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
        }
    }
};

int main()
{
    Node *head = new Node(4);
    
    head->left = new Node(3);
    head->right = new Node(5);
    head->levelOrderTraversal(head);
    return 0;
}