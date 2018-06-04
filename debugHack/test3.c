#include <stdlib.h>
#include <stdio.h>

int main()
{
    int* x = malloc(sizeof(int));
    int a = *x + 1;
    free(x);
    return a;
}