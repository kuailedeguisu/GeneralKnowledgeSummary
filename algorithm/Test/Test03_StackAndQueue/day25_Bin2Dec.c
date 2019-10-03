#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define STACK_INIT_SIZE 20
#define STACKINCREMENT 10

typedef char ElemType;

typedef struct {
    ElemType *base;
    ElemType *top;
    int stackSize;
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
int StackLen(sqStack s) {
    return s.top - s.base;// element numbers
}


int main() {
    ElemType c;
    sqStack s;
    int len, i, sum = 0;

    InitStack(&s);

    printf("请输入一个二进制数，输入#表示结束！\n");
    scanf("%c", &c);
    while (c != '#') {
        Push(&s, c);
        scanf("%c", &c);
    }

    getchar();// clear keyboard buffer '\n' == 10

    len = StackLen(s);

    for (i = 0; i < len; ++i) {
        Pop(&s, &c);
        sum += (c - 48) * pow(2, i);// c ascii code is 48 for '0'
    }

    printf("bin2Dec is %d\n", sum);

    return 0;
}
