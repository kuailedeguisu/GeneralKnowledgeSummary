#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef int Status;
#define OK 1
#define ERROR 0

typedef struct StackNode {
    ElemType data;
    struct StackNode *next;
}StackNode, *LinkedStackPtr;

typedef struct LinkedStack {
    LinkedStackPtr top;
    int count; // stack element count
}

Status Push(LinkedStack *s, ElemType e) {
    LinkedStackPtr p = (LinkedStackPtr)malloc(sizeof(StackNode));
    if (!p) {
        exit(0);
    }
    p->data = e;
    p->next = s->top;
    s->top = p;
    s->count++;
    return OK;
}

Status Pop(LinkedStack *s, ElemType *e) {
    LinkedStackPtr p;
    if (StackEmpty(*s)) {
        return ERROR;
    }

    *e = s->top->data;
    p = s->top;
    s->top = s->top->next;
    free(p);
    s->count--;
    return OK;
}