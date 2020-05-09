#include<bits/stdc++.h>
using namespace std;

//Program to swap Nodes without swapping the data;
class Node{
    public:
        int data;
        Node* next;
};

void swapNodes(Node** head , int x , int y){
    // if x and y are same
    if(x == y){
        return;
    }

    Node* prevX = NULL;
    Node* currX = *head;
    // Searching of x
    while(currX && currX->data != x){
        prevX = currX;
        currX = currX->next;
    }
    Node* prevY = NULL;
    Node* currY = *head;
    // Similarly, searching of y
    while(currY && currY->data != y){
        prevY = currY;
        currY = currY->next;
    }
    // if x or y are not in the list
    if(currX == NULL || currY == NULL){
        return;
    }
    // if x is not the head of the linked-list
    if(prevX != NULL){
        prevX->next = currY;
    }
    else{
        *head = currY;
    }
    // Similarly, if y is not the head of the linked-list
    if(prevY != NULL){
        prevY->next = currX;
    }
    else{
        *head = currX;
    }

    if(currX && currY)
        swap(currX->next , currY->next);
}
void insertion(Node** head , int new_data){
    //Insertion at Beginning
    Node* new_node = new Node();

    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node;
}
void print_list(Node* node){
    while(node != NULL){
        cout<<node->data<<" ";
        node = node->next;
    }
}
int main(){
    Node* start = NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        insertion(&start , val);
    }
    //push(&start , 6);
    //push(&start , 5);
    //push(&start , 4);
    //push(&start , 3);
    //push(&start , 2);
    //push(&start , 1);

    cout<<"Print List before swapping"<<endl;
    print_list(start);
    cout<<endl;

    int x,y;
    cin>>x>>y;
    swapNodes(&start , x , y);
    cout<<endl;

    cout<<"Print List after swapping"<<endl;
    print_list(start);

}
