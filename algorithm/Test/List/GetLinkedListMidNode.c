#include "LinkedList.h"
// fast and slow pointer
// search: fast pointer, move two steps once
// mid: slow pointer, move one step once
Status GetLinkedListMidMode(LinkedList L, ElemType *e) {
    LinkedList search, mid;
    search = mid = L;

    while (search != NULL) {
        if (search->next->next != NULL) {
            search = search->next->next;
            mid = mid->next;
        } else {
            search = search->next;
        }
    }

    *e = mid->data;
    return OK;
}