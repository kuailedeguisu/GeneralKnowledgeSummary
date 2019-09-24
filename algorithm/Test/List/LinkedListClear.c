#include "LinkedList.h"
Status LinkedListClear(LinkedList *L) {
    LinkedList p, q;
    p = (*L)->next;

    while(p) {
        q = p->next;
        free(p);
        p = q;
    }

    (*L)->next = NULL;

    return OK;
}