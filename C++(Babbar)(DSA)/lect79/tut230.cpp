// code link :- https://www.naukri.com/code360/problems/implement-trie_631356?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class TrieNode {
    public:
        char data;
        TrieNode* child[26];
        bool isTerminal;

        TrieNode(char data){
            this->data = data;
            for(int i=0 ; i<26;i++){
                child[i]=NULL;
            }
            isTerminal = false;
        }
};

class Trie {

public:

    TrieNode* root;

    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* root , string word){
            // Base case
            if(word.length()==0){
                root->isTerminal= true;
                return ;
            }

            // extract the letter from the word , and cenverting into index.
            int index = word[0]-'a';
            TrieNode* child;

            // check for word in the root 
            if(root->child[index] != NULL){
                // word present 
                child = root->child[index];
            }
            else{
                // word absent 
                child = new TrieNode(word[0]);
                root->child[index] = child;
            }

            // Recursive call , we increase the pointer of both root & word , we increase the root by passing the new child as we have pointer the child to the next desired node.
            insertUtil(child , word.substr(1));
        }

    /** Inserts a word into the trie. */
    void insert(string word) {
        insertUtil(root , word);
    }


    bool SearchUtil(TrieNode* root , string word){
            // base case
            if(word.length()==0){
                return root->isTerminal;
            }

            // taking the char from the word and converting it into index
            int index = word[0]-'a';
            TrieNode* Child;
            
            // check for word in root
            if(root->child[index] != 0){
                // present 
                Child = root->child[index];
            }
            else{
                // absent,
                return false;   
            }

            // recursive call
            return SearchUtil(Child , word.substr(1));
        }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        return SearchUtil(root , word);
    }

    bool PrefixUtil(TrieNode* root , string word){
            // base case
            if(word.length()==0){
                return true;
            }

            // taking the char from the word and converting it into index
            int index = word[0]-'a';
            TrieNode* Child;
            
            // check for word in root
            if(root->child[index] != 0){
                // present 
                Child = root->child[index];
            }
            else{
                // absent,
                return false;   
            }

            // recursive call
            return PrefixUtil(Child , word.substr(1));
        }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        return PrefixUtil(root , prefix);
    }
};

int main(){
    
}