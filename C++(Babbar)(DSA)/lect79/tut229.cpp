#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//                                          TRIE

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

class Trie{
    public:
        TrieNode* root;
        Trie(){
            root = new TrieNode('\0');
        }


        // Insert

        // Recursive way to insert word in Trie.
        void insertUtil(TrieNode* root , string word){
            // Base case
            if(word.length()==0){
                root->isTerminal= true;
                return ;
            }

            // extract the letter from the word , and cenverting into index.
            int index = word[0]-'A';
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


        // we have done this so that user don't have to give the root .
        void insertWord(string word){
            insertUtil(root , word);
        }


        // Search
        bool SearchUtil(TrieNode* root , string word){
            // base case
            if(word.length()==0){
                return root->isTerminal;
            }

            // taking the char from the word and converting it into index
            int index = word[0]-'A';
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

        bool SearchWord(string word){
            return SearchUtil(root , word);
        }


        // Deletion
        bool DeletionUtil(TrieNode* root , string word){
            // Base case
            if(word.length()==0){
                root->isTerminal= false;
                return true;
            }

            // extracting the word 
            int index = word[0]-'A';
            TrieNode* child;

            // check for nodes 
            if(root->child[index] != NULL){
                // present 
                child = root->child[index];
            }
            else{
                // absent
                return true;
            }

            return DeletionUtil(child , word.substr(1));
        }

        bool Deletion(string word){
            return DeletionUtil(root , word);
        }
};


int main(){

    Trie* T = new Trie();
    T->insertWord("ABC");
    T->insertWord("CA");
    T->insertWord("DU");
    T->insertWord("TIME");

    bool ans = T->SearchWord("TIME");
    cout<< ans<<endl;

    cout<<T->Deletion("TIME ")<<endl;
    cout<<T->SearchWord("TIME")<<endl;
}