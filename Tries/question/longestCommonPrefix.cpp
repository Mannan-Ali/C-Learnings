#include <bits/stdc++.h>
using namespace std;

// string longestCommonPrefix(vector<string> &strs)
// {
//     string ans="";
//     for(int i = 0 ;i<strs[0].length();i++){

//         bool match = true;
//         char ch = strs[0][i];
//         for(int j = 1;j < strs.size();j++){

//             if( strs[j].size() < i || ch != strs[j][i]){
//                 match = false;
//                 break;
//             }
//         }
//         if(match == false){
//             break;
//         }else{
//             ans.push_back(ch);
//         }
//     }
//     return ans;
// }

// APPROACH 2 :
class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    int childCount;
    bool isTerminal;
    TrieNode(char ch)
    {
        this->data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = nullptr;
        }
        childCount = 0;
        isTerminal = false;
    }
};

class Trie
{
public:
    TrieNode *root;
    Trie(char ch)
    {
        root = new TrieNode(ch);
    }
    void insertHelper(TrieNode *root, string word, int index)
    {
        // base case
        if (index == word.length())
        {
            root->isTerminal = true;
            return;
        }
        TrieNode *child;

        // present
        if (root->children[word[index] - 'a'] != nullptr)
        {
            child = root->children[word[index] - 'a'];
        }
        else
        {
            // if absent create
            child = new TrieNode(word[index]);
            root->childCount++;
            root->children[word[index] - 'a'] = child;
        }
        insertHelper(child, word, index + 1);
    }
    void insertWord(string word)
    {
        insertHelper(root, word, 0);
    }
    void lcp(string val, string &ans){
        for (int i = 0; i < val.length(); i++)
        {
            char ch = val[i];
            if(root->childCount == 1){
                ans.push_back(ch);

                root = root->children[ch-'a'];

            }else{
                break;
            }
            if(root->isTerminal){
                break;
            }
        }

    }
};
string longestCommonPrefix(vector<string> &strs)
{
    Trie *t = new Trie('\0');
        string ans = "";
    for (int i = 0; i < strs.size(); i++)
    {
        if(strs[i].empty()){
            return ans;
        }
        t->insertWord(strs[i]);
    }

    string first = strs[0];
    //we are taking the first value from string and then checking it in trie from which character the childCount > 1 we stop there
    t->lcp(first,ans);
    return ans;
}

int main()
{
    vector<string> str = {"abab", "aba", ""};
    cout << longestCommonPrefix(str);
    return 0;
}