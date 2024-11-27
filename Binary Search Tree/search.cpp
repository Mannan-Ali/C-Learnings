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
// RECURIVE apporach : O(logN)
//  bool search(Node *root, int val)
//  {
//      if (val == -1)
//      {
//          cout << "Enter valid data" << endl;
//          return false;
//      }
//      if (root == nullptr) return false;
//      if (val == root->data) return true;
//     else if (val > root->data)
//     {
//         return search(root->right, val);
//     }
//     else
//     {
//         return search(root->left, val);
//     }

//     return false;
// }

// iterative apporach : SC = O(1)
bool search(Node *root, int val)
{
    Node *temp = root;

    while (temp != nullptr)
    {

        if (val == temp->data)
        {
            return true;
        }
        else if (val < temp->data)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }
    return false;
}
int main()
{
    Node *root = nullptr;
    inputData(root);
    cout << search(root, 21);
    return 0;
}