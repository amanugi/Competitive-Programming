//Recursive Approach
int length_of_list(struct Node* head) 
{ 
    // Base case 
    if (head == NULL) 
        return 0; 
  
    // length is -> 1 + length of remaining list 
    return 1 + length_of_list(head->next); 
} 
