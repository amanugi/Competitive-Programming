#include<bits/stdc++.h>
#include<stack>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
};
// Inorder traversal Iterative
void inorder_traversal(Node* root){
    stack<Node *> s;
    Node* curr = root;

    while((curr != NULL) || (!s.empty())){
        while(curr != NULL){
            s.push(curr);
            //cout<<curr->data<<" "; 
            curr = curr->left;
        }
        //curr is null at this point
        Node* popped_item = s.top();
        s.pop();
        cout<<popped_item->data<<" ";
        curr = popped_item->right;
    }
}

Node* newNode(int node_data){
    Node* new_node = new Node();
    new_node->data = node_data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}
int main(){
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    inorder_traversal(root);
}
