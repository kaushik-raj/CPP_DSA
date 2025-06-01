// code link :- https://www.naukri.com/code360/problems/implement-a-phone-directory_1062666?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//                      Implimentation of a phone directory


#include <vector>
#include <string>
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

        void insertWord(string word){
            insertUtil(root , word);
        }

        void printSuggestion(TrieNode* curr , vector<string>& temp , string& prefix){
            if(curr->isTerminal){
                temp.push_back(prefix);
            }

            // to check for all child of the curr
            for(char ch = 'a' ; ch< 'z';ch++){

                TrieNode* next = curr->child[ch-'a'];    
                if(next!=NULL){
                    prefix.push_back(ch);
                    printSuggestion(next , temp , prefix);
                    prefix.pop_back();
                }
            }
        }

        vector<vector<string>> getsuggestion(string queryStr){
            TrieNode* prev = root;
            vector<vector<string>> output;
            string prefix = "";

            for(int i = 0 ; i<queryStr.length();i++){
                char lastch = queryStr[i];

                prefix.push_back(lastch);

                // check for lastch in the next of prev pointer.
                TrieNode* curr = prev->child[lastch-'a'];

                // if not present
                if(curr==NULL){
                    break;
                    // as if there is no match to the next char , then no need to check further 
                }
                // if present
                vector<string> temp;
                printSuggestion(curr , temp , prefix);
                output.push_back(temp);
                prev = curr;
            }

            return output;
        }

};


vector<vector<string>> phoneDirectory(vector<string>& contactList, string& queryStr)
{
    Trie* t = new Trie();

    // put all the string into the trie
    for(int i =0 ; i< contactList.size();i++){
        t->insertWord(contactList[i]);
    }

    return t->getsuggestion(queryStr);
}

int main(){
    
}