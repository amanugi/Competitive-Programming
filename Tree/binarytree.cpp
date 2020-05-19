#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
};

void preorder(Node* root){
    if(root){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
        //return root;
    }
}

Node* newNode(int new_data){
    Node* treeNode = new Node();
    treeNode->data = new_data;
    treeNode->left = NULL;
    treeNode->right = NULL;
    return treeNode;
}
int main(){
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->right->right = newNode(5);

    preorder(root);
}
