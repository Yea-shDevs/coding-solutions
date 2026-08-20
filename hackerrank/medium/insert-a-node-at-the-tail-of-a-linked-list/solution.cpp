
SinglyLinkedListNode* Getnode(){
    SinglyLinkedListNode* p;
    p=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    return p;
}


SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
SinglyLinkedListNode* q=Getnode();
q->data = data;
q->next = NULL;
if(head==NULL)
return q;
SinglyLinkedListNode* p= head;
while( p->next != NULL)
       p=p->next;

p->next= q;
return head;


}

