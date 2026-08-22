

/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
 */

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
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* p=llist;

    for(int i=0;i<position-1;i++)
    p=p->next;
     SinglyLinkedListNode* r=p->next;
     SinglyLinkedListNode* q=getnode();
     q->data= data;
     q->next=r;
     p->next= q;
    
    return llist;

}

