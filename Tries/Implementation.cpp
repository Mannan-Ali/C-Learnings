#include <bits/stdc++.h>
using namespace std;

// basic representation

//       [root]
//         |
//       [ 'a' ]
//      /   |   \
    // nullptr  [ 'b' ]  nullptr ... (total 26 nullptrs)
//              /    |   \
    //         nullptr  nullptr nullptr ... (total 26 nullptrs)

// here we will map 0-A , 1->B like this(easy -'A' with every char it will make there index 0 ,1,2 from ascii )
// basically what we are doing here is  root will have child a,b,c,d,........z now a can have same way 26 letters and llly other 25 can have this so hulk tree.

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal; // to check if the word exist or not
    TrieNode(char ch)
    {
        this->data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = nullptr; // at start all the node in the array is pointing to null till a value is entered
        }
        isTerminal = false; // at start no node is terminal

        // in this constructor what we are doing is if a char is added to the tree then make its 26 child node null till something is assigned to it
    }
};

class Trie
{
public:
    // the topmost node is created here for TrieNode
    TrieNode *root;
    Trie()
    {
        root = new TrieNode('\0'); // this will only be called once to make root node as null character
        // so an object of Trie will be made on basis of TrieNode , TrieNode object only will be made like this when we want to make a new char with 26 array of pointers
    }

    // why to pass root when root is delcared in same function as this is a recursion function so inside we will module root accordingly
    // thats why we also need insertword function or there wwas no need for it too
    void insertHelper(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            root->isTerminal = true; // here the root will point to last character so
            return;
        }
        // assuming we are only entering in capitals
        int index = word[0] - 'A';
        TrieNode *child;

        // present
        if (root->children[index] != nullptr)
        {
            child = root->children[index];
        }
        else
        {
            // if absent create
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        // word = "mannan";
        // word.substr(1); // Output: "annan"
        insertHelper(child, word.substr(1));
    }
    void insertWord(string word)
    {
        insertHelper(root, word);
    }

    // SEARCH
    bool searchHelper(TrieNode *root, string word, int index)
    {
        // base case
        if (index == word.length())
        {
            return root->isTerminal; // if true then present if false then not present
        }
        TrieNode *child;
        // present
        if (root->children[word[index] - 'A'] != nullptr)
        {
            child = root->children[word[index] - 'A'];
        }
        else
        {
            // if absent then return false
            return false;
        }
        return searchHelper(child, word, index + 1);
    }
    bool search(string word)
    {
        return searchHelper(root, word, 0);
    }

    void deleteWordHelper(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            root->isTerminal = false; // here the root will point to last character so
            return;
        }
        // assuming we are only entering in capitals
        int index = word[0] - 'A';
        TrieNode *child;

        // present
        if (root->children[index] != nullptr)
        {
            child = root->children[index];
        }
        else
        {
            // if absent create
            return;
        }
        // word = "mannan";
        // word.substr(1); // Output: "annan"
        deleteWordHelper(child, word.substr(1));
    }
    void deleteWord(string word)
    {
        deleteWordHelper(root, word);
    }
};
int main()
{
    Trie *t = new Trie();
    t->insertWord("SUJAL");
    t->insertWord("MANNAN");
    t->insertWord("SUMIT");
    cout << t->search("MANNAN");

    return 0;
}