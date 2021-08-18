#include<bits/stdc++.h>
using namespace std;
#define ALPHA (26)
#define CHAR_TO_INDEX(c) ((int)c-(int)'a')

struct TrieNode{
    struct TrieNode *children[ALPHA];
    bool isLeaf;
};

struct TrieNode *getNode(void)
{   
    struct TrieNode *pNode = new TrieNode;
        pNode->isLeaf = false;
        for(int i= 0 ; i<ALPHA; i++)
        pNode->children[i] = NULL;
    return pNode;
}


void insert(struct TrieNode *root, string key)
{
    struct TrieNode* temp = root;
    for (int i = 0; i < key.size(); i++)
    {
         int ch = key[i] - 'a';
        if (temp->children[ch] != NULL)
            temp = temp->children[ch];
        else 
        {
            struct TrieNode* n = getNode();
            temp->children[ch] = n;
            temp = n;
        }
    }
    temp->isLeaf = true;
}


bool search(struct TrieNode *root, string key) 
{
    struct TrieNode* t = root;
    for (int i = 0; i < key.size(); i++)
    {
        int ch = key[i] - 'a';
        if (t->children[ch] == NULL)    return false;
        else    
        {
        t = t->children[ch];
        }
    }
    return t->isLeaf;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string keys[n];
        struct TrieNode *root = getNode();
        for(int i = 0 ; i< n ; i++)
         {
              cin >> keys[i];
              insert(root , keys[i]);
        }
         string x;
         cin >> x;
         if(search(root , x))
         cout << 1 << endl;
         else 
         cout << 0 << endl;
    }
}