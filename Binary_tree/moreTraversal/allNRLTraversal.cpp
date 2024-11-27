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

// LNR traversal
void inorder(Node *root)
{
    if (root == nullptr)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root)
{
    if (root == nullptr)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    if (root == nullptr)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = nullptr;
    buildBinaryTree(root);
    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
    postorder(root);
    cout << endl;

    return 0;
}