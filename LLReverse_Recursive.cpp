/* struct Node
{
    int data;
    struct Node* next;
};

Above structure is used to define the linked list, You have to complete the below functions only */

struct Node* reverseList(struct Node* head) {
  
  //Recursive:
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* new_head=reverseList(head->next);
    
    head->next->next=head;
    head->next=NULL;
   
    return new_head;
}
