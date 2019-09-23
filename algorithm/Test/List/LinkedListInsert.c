#include "LinkedList.h"
/*
初始条件：线性表L已经存在，并且1<= i <= ListLength(L)
操作结果：在L中第i个位置之前插入新的数据元素e，L的长度加1
*/
Status LinkedListInsert(LinkedList *L, int i, ElemType e) {
    int j;
    LinkedList p, s;

    p = *L;
    j = 1;

    while( p && j < i) {
        p = p->next;
        j++;
    }

    if (!p || j > i) {
        return ERROR;
    }

    s = (LinkedList)malloc(sizeof(Node));
    s->data = e;

    s->next = p->next;
    p->next = s;

    return OK; 
}