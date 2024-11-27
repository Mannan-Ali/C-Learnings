#include <bits/stdc++.h>
#include <utility>
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

void inorder(Node *root, vector<int> &arr)
{
    if (root == nullptr)
        return;

    inorder(root->left, arr);
    arr.push_back(root->data);
    inorder(root->right, arr);
}
// Approach 1 :
//  int findPreSuc(Node *root, int key, vector<int> &arr)
//  {
//      inorder(root, arr);
//      int start = 0, end = arr.size();
//      while (start <= end)
//      {
//          int mid = (start + (end - start) / 2);
//          if (arr[mid] == key)
//          {
//              return mid;
//              break;
//          }
//          else if (arr[mid] < key)
//          {
//              start = mid + 1;
//          }
//          else
//          {
//              end = mid - 1;
//          }
//      }
//      return -1;
//  }

// Approach 2:
Node *minVal(Node *root)
{

    while (root->left != nullptr)
    {
        root = root->left;
    }
    return root;
}

Node *maxVal(Node *root)
{

    while (root->right != nullptr)
    {
        root = root->right;
    }
    return root;
}
void findPreSuc(Node *root, int key, Node *&pre, Node *&suc)
{
    suc= nullptr;
    pre = nullptr;
    Node * temp = root;
    while(temp != nullptr && temp->data != key ){
        if(temp->data>key){
            suc = temp;
            temp = temp->left;

        }else{
            pre = temp;
            temp = temp->right;

        }
    }
    if(temp!=nullptr){
        if(temp->right !=nullptr){
            suc = minVal(temp->right);
        }
        if(temp->left !=nullptr){
            pre = maxVal(temp->left);
        }
    }else{
        return;
    }
}


int main()
{
    vector<int> arr;
    Node *root = nullptr;
    Node *pre = nullptr;
    Node *succ = nullptr;
    inputData(root);
    findPreSuc(root,8,pre,succ);
    cout<<pre->data<<endl;
    cout<<succ->data;
    // int mid = findPreSuc(root, 11, arr);
    // cout<<"Successor: "<<arr[mid+1]<<endl;
    // cout<<"Predecessor: "<<arr[mid-1];
    return 0;
}