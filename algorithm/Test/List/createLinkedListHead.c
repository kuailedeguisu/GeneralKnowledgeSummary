#include "LinkedList.h"
/*头插法建立单链表*/
void createLinkedListHead(LinkedList *L, int n) {
    LinkedList p;
    int i;
    srand(time(0));

    *L = (LinkedList)malloc(sizeof(Node));
    (*L)->next = NULL;

    for (i = 0; i < n; ++i) {
        p = (LinkedList)malloc(sizeof(Node));
        p->data = rand()%100+1;
        
        p->next = (*L)->next;
        (*L)->next = p;
    }

}