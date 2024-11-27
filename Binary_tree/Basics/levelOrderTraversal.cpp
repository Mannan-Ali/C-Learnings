#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node()
    {
        cout << "Default Constructor called" << endl;
    }
    Node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node *buildBinaryTree(Node *&root)
{
    cout << "Enter data : ";
    int data;
    cin >> data;
    root = new Node(data);
    // base case
    if (data == -1)
    {
        return nullptr;
    }
    cout << "Enter data to insert into left of " << data << endl;
    root->left = buildBinaryTree(root->left);

    cout << "Enter data to insert into right of " << data << endl;
    root->right = buildBinaryTree(root->right);

    return root;
}

void levelOrderTraversal(Node *root)
{
    if(root == nullptr){
        cout<<"Empty Tree"<<endl;
        return;
    }
    queue<Node *> q1;
    q1.push(root);
    q1.push(nullptr); // this is for seperation of root value
    while (!q1.empty())
    {
        Node *temp = q1.front();
        q1.pop();
        if (temp == nullptr)
        {
            cout << endl;
            if (!q1.empty())
            {
                q1.push(nullptr);
            }
        }
        else
        {
            cout << temp->data<<" ";
            if (temp->left)
            {
                q1.push(temp->left);
            }
            if (temp->right)
            {
                q1.push(temp->right);
            }
        }
    }
}
int main()
{
    Node *root = nullptr;
    buildBinaryTree(root);
    levelOrderTraversal(root);
    return 0;
}