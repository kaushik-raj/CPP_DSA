#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{

public:
    int data;
    Node* right;
    Node* left;

    Node(int d){
        this->data = d;
        this->right=NULL;
        this->left = NULL;
    }    
};

Node* insertIntoBST(Node* root , int data){

    // base case
    if(root==NULL){
        root = new Node(data);
        return root;
    }

     
    if(root->data < data){
        // if the given data is bigger than the root->data
        root->right = insertIntoBST(root->right , data);
    }
    else{
        // if the given data is smaller then the root->data
        root->left = insertIntoBST(root->left , data);
    }
    return root ;

}

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}

void inorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

void preorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}



void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data!=-1){
        root = insertIntoBST(root ,data);
        cin>>data;
    }
}

int main(){
    Node* root = NULL;

    cout<<"Enter data to create a BST"<<endl;
    takeInput(root);

    cout<<"Level order traversal "<<endl;
    levelOrderTraversal(root);

    cout<<endl<<"Inorder traversal "<<endl;
    inorder(root);

    cout<<endl<<"Preorder traversal "<<endl;
    preorder(root);
    cout<<endl<<"Postorder traversal "<<endl;
    postorder(root);
    
}