

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* Getnode() {
    SinglyLinkedListNode* p;
    p = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    return p;
}

SinglyLinkedListNode* insertNodeAtTail( SinglyLinkedListNode* head, int data) {


   SinglyLinkedListNode *Q;
   Q=Getnode();
   Q->data=data;
   Q->next=NULL;
   if(head==NULL){
    head=Q;
   }
   else{
     SinglyLinkedListNode* p = head;
    
     while(p->next!=NULL)
        p=p->next;
        
        p->next=Q;
     }
     return head;

}


