#include<bits/stdc++.h>
using namespace std;

// Recursive Approach
class Node{
    public:
        int data;
        Node* left;
        Node* right;
};

int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int lheight = height(root->left);
    int rheight = height(root->right);

    int ans = max(lheight + 1 , rheight + 1);
    return ans;
}
void print_level_order(Node* root , int level){
    if(root == NULL){
        return;
    }
    if(level == 1){
        cout<<root->data<<" ";
    }
    else{
        print_level_order(root->left , level-1);
        print_level_order(root->right , level-1);
    }
}
void level_order(Node* root){
    int h = height(root);
    for(int i=1;i<=h;i++){
        print_level_order(root , i);
    }
}

Node* newNode(int new_data){
    Node* nw = new Node();
    nw->data = new_data;
    nw->left = NULL;
    nw->right = NULL;
    return nw;
}

int main(){
    Node* root = newNode(1);
    root->left = newNode(4);
    root->right = newNode(9);
    root->left->right = newNode(7);
    root->right->left = newNode(5);

    level_order(root);
}
