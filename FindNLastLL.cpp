int findNLast(Node* head, int n){
     if(head==NULL)
    return -1;
	Node* first=head;
  Node* second=head;
  int i=0;
  while(second->next!=NULL){
    if(i<n-1)
      second=second->next;
    else{
      first=first->next;
      second=second->next;
    }
    i++;
  }
  if(i<n-1)
    return second->data;
  return first->data;
}
