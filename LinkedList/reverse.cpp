#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void reverse_list(Node** head){

    Node* prev = NULL;
    Node* curr = *head;
    Node* next = NULL;

    while(curr != NULL){

        next = curr->next;   // store next of curr
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;
}
void insertionlast(Node** head , int new_data){

    Node* last = *head;

    Node* nw = new Node();
    nw->data = new_data;
    nw->next = NULL;

    if(*head == NULL){
        *head = nw;
        return;
    }
    else{
        while(last->next != NULL){
            last = last->next;
        }
    last->next = nw;
    }


    //nw->next = *head;      // insertion at beg
    //*head = nw;
}

void print_list(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    Node* head = NULL;

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        insertionlast(&head , val);
    }
    cout<<"Print list before reversal"<<endl;
    print_list(head);
    cout<<endl;

    reverse_list(&head);

    cout<<"Print list after reversal"<<endl;
    print_list(head);
}
