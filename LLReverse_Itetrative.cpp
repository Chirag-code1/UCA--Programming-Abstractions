struct Node* reverseList(struct Node* head) {
  // Itetrative:
  	Node* preptr=NULL;
   Node* curptr=head;
   Node* nextptr;
   while(curptr!=NULL){
       nextptr=curptr->next;
       curptr->next=preptr;
        
       preptr=curptr;
       curptr=nextptr;
   }
  head = preptr;
   return head;
 
}
