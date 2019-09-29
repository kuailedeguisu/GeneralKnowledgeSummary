#define MAXSIZE 1000
typedef int ElemType;
typedef int Status;
#define OK 1
#define ERROR 0

typedef struct {
    ElemType data;
    int cur;
} Component, StaticLinkedList[MAXSIZE];