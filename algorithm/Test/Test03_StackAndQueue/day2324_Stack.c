#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10

typedef struct {
    ElemType *base;
    ElemType *top;
    int stackSize;// max capacity of stack
}sqStack;

void InitStack(sqStack *s) {
    s->base = (ElemType *)malloc(STACK_INIT_SIZE * sizeof(ElemType));

    if (!s->base) {
        exit(0);
    }

    s->top = s->base;
    s->stackSize = STACK_INIT_SIZE;
}

void Push(sqStack *s, ElemType e) {
    // If stack is full, append some space
    if ((s->top - s->base) >= STACK_INIT_SIZE) {
        s->base = (ElemType *)realloc(s->base, (s->stackSize + STACKINCREMENT) * sizeof(ElemType));
        if (!s->base) {
            exit(0);
        }

        s->top = s->base + s->stackSize;
        s->stackSize = s->stackSize + STACKINCREMENT;
    }

    *(s->top) = e;
    s->top++;
}

void Pop(sqStack *s, ElemType *e) {
    if (s->top == s->base) {
        return;
    }
    // -- at first to make top pointer to point at the valid element
    // then * to get the element
    *e = *--(s->top);
}

void ClearStack(sqStack *s) {
    s->top = s->base;
}

void DestroyStack(sqStack *s) {
    int i, len;
    len = s->stackSize;

    for (i = 0; i < len; ++i) {
        free(s->base);
        s->base++;
    }

    s->top = s->base = NULL;
    s->stackSize = 0;
}
/*
top->empty
      D
      C
      B
base->A
*/
int stackLen(sqStack s) {
    return s.top - s.base;// element numbers
}