struct Node *copyList(struct Node *org)
{
   if(org==NULL)
     return org;
   struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
   temp->data = org->data;
   temp->next = copyList(org->next);
   return temp;
}
