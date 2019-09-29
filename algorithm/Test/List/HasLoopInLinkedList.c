#include "LinkedList.h"
/*
Method 1: 
    cur1 moves one step once
    cur2 moves from the beginning each time
*/
int HasLoopInLinkedList1(LinkedList L) {
    LinkedList cur1 = L;
    int pos1 = 0;

    while (cur1) {
        LinkedList cur2 = L;
        int pos2 = 0;

        while (cur2) {
            if (cur2 == cur1) {
                if (pos1 == pos2) {
                    break;
                } else {
                    printf("环的位置在第%d个结点处", pos2);
                    return 1;
                }
            }

            cur2 = cur2->next;
            pos2++;
        }

        cur1 = cur1->next;
        pos1++;
    }

    return 0;
}

/*
Method 2: fast and slow pointer
    p moves one step once
    q moves two steps once
*/
int HasLoopInLinkedList1(LinkedList L) {
    int step1 = 1;
    int step2 = 2;

    LinkedList p = L;
    LinkedList q = L;

    while (p != NULL && q != NULL && q->next != NULL) {
        p = p->next;

        if (q->next != NULL) {
            q = q->next->next;
        }

        printf("p:%d, q=%d\n", p->data, q->data);
        if (p == q) {
            return 1;
        }


    }

    return 0;
}