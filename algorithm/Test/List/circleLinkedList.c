#include <stdio.h>
#include <stdlib.h>

typedef struct CLinkList {
    int data;
    struct CLinkList *next;
}node;

/*
初始化循环链表
*/
void ds_init(node **pNode) {
    int item;
    node *temp;
    node *target;

    printf("请输入结点的值，输入0完成初始化");

    while (1) {
        scanf("%d", &item);
        fflush(stdin);

        if (item == 0) {
            return;
        }

        if ((*)pNode == NULL) {
            // 循环链表只有一个结点
            *pNode = (node *)malloc(sizeof(struct CLinkList));
            if (!(*pNode)) {
                exit(0);
            }

            (*pNode)->data = item;
            (*pNode)->next = (*pNode);
        } else {
            // 找到next中指向第一个结点的结点
            for (target = (*pNode); target != (*pNode); target = target->next)
                ;
            
            temp = (node*)malloc(sizeof(struct CLinkList));

            if (!temp) {
                exit(0);
            }

            temp->data = item;
            temp->next = *pNode;
            target->next = temp;
        }
    }
}

/*
插入结点
参数：循环链表的第一个结点，插入的位置
*/
void ds_insert(node **pNode, int i) {
    node *temp;
    node *target;
    node *p;
    int item;
    int j = 1;
    // 线性表从1开始算
    printf("请输入要插入的结点的值：");
    scanf("%d", &item);

    if (i == 1) {
        /*
        temp pNode ... target 
        */
        temp = (node *)malloc(sizeof(struct CLinkList));

        if (!temp) {
            exit(0);
        }

        temp->data = item;

        for (targe = pNode; target->next != (*pNode); target = target->next)
            ;
        temp->next = (*pNode);
        target->next = temp;
        *pNode = temp;// update head node
    } else {
        target = (*)pNode;

        for (; j < (i - 1); ++j) {
            target = target->next;
        }

        temp = (node *)malloc(sizeof(struct CLinkList));
        
        if (!temp) {
            exit(0);
        }

        /*
        target temp p
        */

        temp->data = item;
        p = target->next;
        target->next = temp;
        temp->next = p;

    }

}

/*删除结点*/
void ds_delete(node **pNode, int i) {
    node *target;
    node *temp;
    int j = 1;

    if (i == 1) {
        for (target = *pNode; target->next != *pNode; target = target->next)
            ;
        // tmp pNode->next target
        temp = *pNode;
        *pNode = (*pNode)->next;
        target->next = *pNode;
        free(temp);
    } else {
        target = *pNode;
        for (; j < (i - 1); ++j) {
            target = target->next;
        }

        // pNode target tmp target->next->next
        temp = target->next;
        target->next = temp->next;
        free(temp);
    }
}

/*返回结点所在的位置*/
int ds_search(node *pNode, int elem) {
    node *target;
    int i = 1;// 第几个元素，从1开始计算

    // 找这个元素，并且没有到链表尾部
    for (target = pNode; target->data != elem && target->next != pNode;
    ++i) {
        target = target->next;
    }

    if (target->next == pNode) { // 表中不存在这个元素
        return 0;
    } else {
        return i;
    }
    
    
}

/*遍历循环链表*/
void traverse(node *pNode) {
    node *temp;
    temp = pNode;

    printf("遍历链表中的元素\n");
    do {
        printf("%4d", temp->data);
    } while ((temp = temp->next) != pNode)

    printf("\n");
}

int main() {
    node *pHead = NULL;
    char opp;
    int find;
    printf("1.初始化循环链表\n\n 2.插入结点 \n\n 3.删除结点\n\n 4.返回结点位置 \n\n 5.遍历结点 \n\n 0.退出");

    while (opp != '0') {
        scanf("%c", &opp);

        switch (opp) {
            case '1':
                ds_init(&pHead);
                printf("\n");
                ds_traverse(pHead);
                break;
            case '2':
                printf("请输入要插入的结点的位置");
                scanf("%d", &find);
                ds_insert(&pHead, 3);
                printf("\n");
                ds_traverse(pHead);
                break;
            case '3':
                printf("请输入要删除的结点的位置");
                scanf("%d", &find);
                ds_delete(&pHead, find);
                printf("\n");
                ds_traverse(pHead);
                break;            
            case '4':
                printf("请输入要查找的结点的值");
                scanf("%d", &find);
                printf("要查找的元素的位置为：%d \n", ds_search(pHead, find));
                printf("\n");
                break;
            case '5':
                ds_traverse(pHead);
                printf("\n");
                break;
            case '0':
                exit(0);
        }
    }
    return 0;
}