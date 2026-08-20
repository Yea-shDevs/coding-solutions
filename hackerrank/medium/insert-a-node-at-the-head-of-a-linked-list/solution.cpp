

// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* getnode(){
    SinglyLinkedListNode* p;
    p=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    return p;
} 
 
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
SinglyLinkedListNode* p= getnode();
p->data= data;
p->next= llist;
llist=p;
return llist;

}

