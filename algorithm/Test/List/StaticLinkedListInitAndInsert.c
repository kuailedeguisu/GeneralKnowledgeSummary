#include "StaticLinkedList.h"
/*
original data:
cursor 5  2  3  4  0  6  7  ...  1
data      A  C  D  E        ...  
index  0  1  2  3  4  5  6  ...  999

1.index 0 cursor and index (MAXSIZE-1) have null data
2.index 0 cursor is the first null data's index
3.index (MAXSIZE-1) cursor is the first non null data's index
4.other index's cursor is the next index
5.the last non null data's cursor is 0
*/
Status StaticLinkedListInit(StaticLinkedList space) {
    int i;

    for (int i = 0; i < MAXSIZE - 1; ++i) {
        space[i].cur = i + 1;
    }

    space[MAXSIZE - 1].cur = 0;
    return OK;
} 

/*
获取空闲元素的下标
将第一个index处的游标赋值为原来的游标（5）所在的index的游标（6），
并返回原来的游标5
*/
int Malloc_SLL(StaticLinkedList space) {
    int i = space[0].cur;// i = 5
    if (space[0].cur) {
        space[0].cur = space[i].cur;// 6
    }
    return i;// 5
}
/*
在静态链表L中第i个元素之前插入新的元素e
Insert data:
在第2个元素C之前插入2 B
cursor 6  5  3  4  0  2  7  ...  1
data      A  C  D  E  B     ...  
index  0  1  2  3  4  5  6  ...  999
*/
Status StaticLinkedListInsert(StaticLinkedList L, int i, ElemType e) {
    int j, k, l;
    k = MAX_SIZE - 1;
    if (i < 1 || i > ListLength(L)+1) {
        return ERROR;
    }

    j = Malloc_SLL(L);// 5
    if (j) {
        L[j].data = e; // L[5] = e
        for (l = 1; l <= i - 1; l++) {
            k = L[k].cur;// 只执行一次循环
        }
        L[j].cur = L[k].cur;// L[5].cur = L[1].cur = 2
        L[k].cur = j;// L[1].cur = 5
        return OK;
    }

    return ERROR;
}