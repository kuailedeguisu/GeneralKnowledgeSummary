#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status;

typedef int ElemType;
typedef struct Node {
    ElemType data;
    struct Node* next;
}Node;
typedef struct Node* LinkedList;