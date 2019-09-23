#include "LinkedList.h"
/*
初始条件：线性表L已经存在，并且1<= i <= ListLength(L)
操作结果：用e返回L中第i个元素的值
*/
Status GetLinkedListElem(LinkedList L, int i, ElemType *e) {
    int j;
    LinkedList p;

    p = L->next;
    j = 1;
    while (p && j < i) {
        p = p->next;
        j++;
    }

    if (!p || j > i) {
        return ERROR;
    }

    *e = p->data;
    return OK;
}