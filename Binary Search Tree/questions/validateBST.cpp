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

// checking if the Binary Search Tree
// Approach 1 : we know that indoder of a bst gives sorted ascending values so if sorted then true or false
// void indorder(Node *root, vector<int> &arr)
// {
//     if (root == nullptr)
//     {
//         return;
//     }
//     indorder(root->left, arr);
//     arr.push_back(root->data);
//     cout << arr.back() << " ";
//     indorder(root->right, arr);
// }
// bool isValidBST(Node *root)
// {
//     if (root == nullptr) return false;

//     vector<int> arr;

//     indorder(root, arr);
//     for (int i = 1; i < arr.size(); i++)
//     {
//         if (arr[i] < arr[i - 1])
//         {
//             return false;
//         }
//     }
//     return true;
// }


//Approach 2:
//what we will do is check the range for each node

bool isBST(Node * root, int min ,int max){
    if(root == nullptr){
        return true;
    }
    if(root->data > min && root->data < max){
        //as we are going left the greater than value changes ro root value
        bool left = isBST(root->left,min,root->data);
        bool right = isBST(root->right,root->data,max);
        return left && right;
    }else{
        return false;
    }

}
int main()
{
    Node *root = nullptr;
    inputData(root);
    cout<<endl;
    if(isBST(root,INT_MIN,INT_MAX)){
        cout<<"It is valid";
    }else{
        cout<<"It is not valid";
    }
    return 0;
}