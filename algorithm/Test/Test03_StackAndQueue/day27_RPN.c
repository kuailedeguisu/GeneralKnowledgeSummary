#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef double ElemType;
#define STACK_INIT_SIZE 100
#define STACKINCREMENT  10
#define MAXBUFFER       10

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

int main() {
    sqStack s;
    char c;
    double d, e;
    char str[MAXBUFFER];
    int i = 0;

    InitStack(&s);
    printf("请按照逆波兰表达式输入待计算数据，数据和运算符用空格隔开，以#作为结束标志\n");
    scanf("%c", &c);
    while (c != '#') {
        while (isdigit(c) || c == '.') {
            str[i++] = c;
            str[i] = '\0';

            if (i >= 10) {
                printf("\n出错：输入的单个数据过大\n");
                return -1;
            }
            scanf("%c", &c);

            if (c == ' ') {
                d = atof(str);
                Push(&s, d);
                i = 0;
                break;
            }
        }

        switch(c) {
            case '+':
                Pop(&s, &e);
                Pop(&s, &d);
                Push(&s, e+d);
                break;
            case '-':
                Pop(&s, &e);
                Pop(&s, &d);
                Push(&s, d-e);
                break;
            case '*':
                Pop(&s, &e);
                Pop(&s, &d);
                Push(&s, d*e);
                break;
            case '/':
                Pop(&s, &e);
                Pop(&s, &d);
                if ( e != 0) {
                    Push(&s, d/e);
                } else {
                    printf("\n出错了：除数是0\n");
                    return -1;
                }

                break;            
        }
        scanf("%c", &c);
    }

    Pop(&s, &d);
    printf("\n最终的计算结果为:%f\n", d);

    return 0;
}
// (1-2) * (4 + 5) = -9
// 1 2 - 4 5 + *
// 8 + (8 + 8) * 8 + 8 / 4= 8 + 128+2=138
// 8 8 8 + 8 * 8 4 /  + + 