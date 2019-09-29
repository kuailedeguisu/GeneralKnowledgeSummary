#include "LinkedList.h"

/*
假设A,B都是非空循环链表的尾指针
aHead(next)->a1(data, next)->a2(data,next)->...an(data, next)<-A
bHead(next)->b1(data, next)->b2(data,next)->...bn(data, next)<-B
*/

LinkedList ConnectTwoLinkedList(LinkedList A, LinkedList B) {
    LinkedList p = A->next;// 保存A表的头结点指针，aHead
    A->next = B->next->next; // B表的开始结点链接到A表尾,b1
    free(B->next);// 释放B表的头结点，即bHead
    B->next = p; // aHead
    return B;
}