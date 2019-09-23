#include "LinkedList.h"
/*
初始条件：线性表L已经存在，并且1<= i <= ListLength(L)
操作结果：删除L中第i个位置的元素，并且e返回其值，L的长度-1
*/
Status LinkedListDelete(LinkedList *L, int i, ElemType *e) {
    int j;
    LinkedList p, q;

    p = *L;
    j = 1;

    while( p->next && j < i) {
        p = p->next;
        j++;
    }

    if (!(p->next) || j > i) {
        return ERROR;
    }

    q = p->next;
    p->next = q->next;

    *e = q->data;
    free(q);

    return OK; 
}