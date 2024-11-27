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

Node *insertion(Node *root, int val)
{
    if (root == nullptr)
    {
        root = new Node(val);
        return root;
    }
    else if (val > root->data)
    {
        // here every time insertion is called for new value
        root->right = insertion(root->right, val);
    }

    else
    {
        // as if not greater than it will be lesser
        root->left = insertion(root->left, val);
    }
}

void inputData(Node *&root)
{
    cout << "Enter value of to put inside tree : ";
    int val;
    cin >> val;

    while (val != -1)
    {
        root = insertion(root, val);
        cin >> val;
    }
}
// Recursive approach
//  Node* lowestCommonAncestor(Node* root, Node* p, Node* q){
//      if(root == nullptr){
//          return nullptr;
//      }
//      if(root->data < p->data && root->data < q->data){
//          return lowestCommonAncestor(root->right,p,q);
//      }else if(root->data > p->data && root->data > q->data){
//          return lowestCommonAncestor(root->left,p,q);
//      }
//      //else if(root->data < p->data && root->data > q->data || root->data > p->data && root->data < q->data){ for this condition
//      return root;
//  }

// iterative approach
Node *lowestCommonAncestor(Node *root, Node *p, Node *q)
{
    while (root != nullptr)
    {
        if (root->data < p->data && root->data < q->data)
        {
            root = root->right;
        }
        else if (root->data > p->data && root->data > q->data)
        {
            root=root->left;
        }else{
            return root;
        }
    }
}
int main()
{
    Node *root = nullptr;
    inputData(root);

    return 0;
}
