#include <bits/stdc++.h>
using namespace std;

// Read this for understanding
/*
Key Concept in Recursive Call
When we call the function recursively (insertion), val remains the same throughout the recursion because it represents the value we are trying to insert into the tree. The recursive process changes root to traverse the tree, but the value being inserted (val) stays constant for each insertion.

Dry Run with Input: 5, 1, 3, 4, 2, 7
Let's go step-by-step, assuming the following:

We call root = insertion(root, val) for each input value.
root changes during recursion to move left or right in the tree.
val remains the value being inserted in that recursive sequence.
Initial State
Tree is empty, i.e., root = nullptr.
Step 1: Insert 5
Call: root = insertion(root, 5)

root == nullptr, so a new node is created with data = 5.
The tree now looks like this:
Copy code
5
Return the new node as the root.
Step 2: Insert 1
Call: root = insertion(root, 1)

root->data = 5, and val = 1.
Since 1 < 5, recursively call: root->left = insertion(root->left, 1).
root->left == nullptr (left subtree is empty), so a new node is created with data = 1.
The tree now looks like this:
Copy code
  5
 /
1
Step 3: Insert 3
Call: root = insertion(root, 3)

root->data = 5, and val = 3.
Since 3 < 5, recursively call: root->left = insertion(root->left, 3).
Now root->data = 1 (left child of 5), and val = 3.
Since 3 > 1, recursively call: root->right = insertion(root->right, 3).
root->right == nullptr (right subtree of 1 is empty), so a new node is created with data = 3.
The tree now looks like this:
Copy code
  5
 /
1
 \
  3
Step 4: Insert 4
Call: root = insertion(root, 4)

root->data = 5, and val = 4.
Since 4 < 5, recursively call: root->left = insertion(root->left, 4).
Now root->data = 1, and val = 4.
Since 4 > 1, recursively call: root->right = insertion(root->right, 4).
Now root->data = 3, and val = 4.
Since 4 > 3, recursively call: root->right = insertion(root->right, 4).
root->right == nullptr (right subtree of 3 is empty), so a new node is created with data = 4.

*/
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

// logic for deletion
/*
The reason we do root->left = deletion(root->left, val) instead of just calling deletion(root->left, val) directly is to update the parent node's pointer to reflect any changes made in the subtree during the recursive deletion process.

Let me break this down for you:

1. How deletion works in a Binary Search Tree (BST)
When deleting a node in a BST, the structure of the tree might change. Specifically:

If the node to be deleted is a leaf node (0 children), we simply delete it.
If the node has 1 child, we replace the node with its child.
If the node has 2 children, we find either the inorder predecessor or the inorder successor to replace the node, and then adjust the tree.
In any of these cases, the recursive deletion function might modify the structure of the subtree rooted at root->left or root->right. This means the parent node's pointer to the modified subtree needs to be updated.

2. Why use root->left = deletion(root->left, val)?
When we recursively delete a node from the left or right subtree, the deletion function returns the new root of that subtree (which could be nullptr if the subtree becomes empty, or a different node if the tree structure changes).

If we don't assign this returned value back to root->left (or root->right), the parent node will still point to the original subtree, which may no longer exist or may have been restructured.

Example:
Suppose we are deleting a node from the left subtree:

cpp
Copy code
root->left = deletion(root->left, val);
If the node to be deleted is successfully removed, deletion(root->left, val) will return the new root of the left subtree.
Assigning this value to root->left ensures that the parent node (root) now correctly points to the updated subtree.
If you simply call deletion(root->left, val) without assigning it back, the parent node will not be updated, and your tree will end up in an inconsistent or broken state.
*/

Node *deletion(Node *&root, int val)
{
    // base case
    if (root == nullptr)
    {
        return root;
    }
    if (root->data == val)
    {

        // 0 child
        if (root->left == nullptr && root->right == nullptr)
        {
            delete root;
            return nullptr;
        }
        // 1 child
        else if (root->left != nullptr && root->right == nullptr)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else if (root->left == nullptr && root->right != nullptr)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        // 2 child
        else if (root->left != nullptr && root->right != nullptr)
        {
            int miniVal = minVal(root->right)->data;
            root->data = miniVal;
            root->right = deletion(root->right, miniVal);
            cout << "This is root inside 2 child : " << root->data<<endl;
            return root;
        }
    }
    else if (root->data > val)
    {
        root->left = deletion(root->left, val);
        cout << "This is root else if : " << root->data<<endl;
        return root;
    }
    else
    {
        root->right = deletion(root->right, val);
        cout << "This is root inside else : " << root->data<<endl;
        return root;
    }
}
int main()
{
    Node *root = nullptr;
    inputData(root);
    levelOrderTraversal(root);
    cout << endl;
    deletion(root, 30);

    return 0;
}