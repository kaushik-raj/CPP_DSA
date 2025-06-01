// code link :- https://www.naukri.com/code360/problems/longest-common-prefix_2090383?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//              Longest common Prefix

class TrieNode {
    public:
        char data;
        TrieNode* child[26];
        bool isTerminal;
        int childCount;

        TrieNode(char data){
            this->data = data;
            for(int i=0 ; i<26;i++){
                child[i]=NULL;
            }
            isTerminal = false;
            childCount = 0;
        }
};

class Trie{

    public:
        TrieNode* root;
        Trie(){
            root = new TrieNode('\0');
        } 
    
    // insertion
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
                root->childCount++;
                root->child[index] = child;
            }

            // Recursive call , we increase the pointer of both root & word , we increase the root by passing the new child as we have pointer the child to the next desired node.
            insertUtil(child , word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root , word);
    }

    void LCP(string word , string& ans ){


        for(int i =0; i<word.length();i++){
            if(root->childCount == 1 && !root->isTerminal){
                ans.push_back(word[i]);
                
                // to move root forward
                int index = word[i]-'a';
                root = root->child[index];
            }
            else{
                break;
            }
        };
        

    }
};

string longestCommonPrefix(vector<string> &arr, int n)
{
    Trie* T = new Trie();

    // insert all the string into the trie 
    for(int i=0 ; i<arr.size();i++){
        T->insertWord(arr[i]);
    }

    string ans = "";
    string str = arr[0];
    T->LCP(str,ans);
    return ans;
}




int main(){
    
}