#include <stdlib.h>
#include <stdio.h>

int main()
{
    int* x = malloc(sizeof(int));
    free(x);
    int a = *x + 1;
    return a;
}