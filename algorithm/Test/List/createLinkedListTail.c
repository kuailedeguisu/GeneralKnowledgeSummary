#include "LinkedList.h"
/*尾插法建立单链表*/
void createLinkedListTail(LinkedList *L, int n) {
    LinkedList p, r;
    int i;
    srand(time(0));

    *L = (LinkedList)malloc(sizeof(Node));
    r = *L;

    for (i = 0; i < n; ++i) {
        p = (LinkedList)malloc(sizeof(Node));
        p->data = rand()%100+1;
        
        r->next = p;
        r = p;
    }

    r->next = NULL;
}