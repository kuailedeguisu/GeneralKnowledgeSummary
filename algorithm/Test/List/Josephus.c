#include <stdio.h>
#include <stdlib.h>
/*
约瑟夫问题：
有41个人，围成一个圆圈，按1，2，3报数，报到3的人自杀，最后所有人都自杀
*/
typedef struct node {
    int data;
    struct node *next;
}node;

/*创建循环链表*/
node *create(int n) {
    node *p = NULL, *head;
    head = (node *)malloc(sizeof(struct node));
    p = head;// p: current node
    node *s; // s: temp node
    int i = 1;

    if (n != 0) {
        while (i <= n) {
            s = (node *)malloc(sizeof(struct node));
            s->data = i++;
            p->next = s;
            p = s;
        }
        s->next = head->next;
    }

    free(head);
    return s->next;
}

int main() {
    int n = 41;
    int m = 3;
    int i;

    node *p = create(n);
    node *temp;

    m %= n;// m1 = 3; m2 = 

    while (p != p->next) {
        for (int i = 1; i < (m - 1); ++i) {
            p = p->next;
        }
        printf("%d->", p->next->data);
        // p p->next(temp) p->next->next
        // delete p->next
        temp = p->next;
        p->next = temp->next;
        free(temp);

        p = p->next;
    }

    printf("%d\n", p->data);

    return 0;
}