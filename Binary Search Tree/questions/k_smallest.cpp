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

void levelOrderTraversal(Node *root)
{
    if (root == nullptr)
    {
        cout << "Empty Tree" << endl;
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
            cout << temp->data << " ";
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

int inoder(Node *root, int k,int &count )
{
    if (root == nullptr)
        return -1;
    // static int i = 0; not always works 
    int left = inoder(root->left, k,count);
    // cout<<"This is left : " <<left<<" ";
    if(left != -1){
        return left;
    }
    count = count + count;
    if (count == k)
    {
        return root->data;
    }
    return inoder(root->right, k,count);
}
int main()
{
    Node *root = nullptr;
    inputData(root);
    int count = 3;
    cout << inoder(root,3, count);
    return 0;
}