#include <stdlib.h>
#include <stdio.h>

int main()
{
    char* p = malloc(10);
    p[10] = 1;
    free(p);
    return EXIT_SUCCESS;
}