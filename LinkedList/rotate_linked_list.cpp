#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void rotate_list(Node** head , int k){
    Node* curr = *head;

    if(k == 0)
        return;

    int cnt = 1;

    while(cnt < k && curr != NULL){
        curr = curr->next;
        cnt++;
    }
    if(curr == NULL){ // ie. k >= no of nodes in the list
        return;
    }

    // Now curr is pointing to kth node so store it
    Node* kthNode = curr;
    while(curr->next != NULL){
        curr = curr->next;
    }
    // make last node points to head node
    curr->next = *head;
    // change head to the next of kthNode
    *head = kthNode->next;

    kthNode->next = NULL;

}
void push(Node** head , int val){
    Node* nw = new Node();
    nw->data = val;
    nw->next = NULL;

    nw->next = *head;
    *head = nw;
}

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main(){
    Node* head = NULL;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        push(&head , i);
    }
    cout << "Given linked list \n";
    printList(head);
    cout<<endl;

    int k;
    cin>>k;

    rotate_list(&head, k);

    cout << "\nRotated Linked list \n";
    printList(head);

}
