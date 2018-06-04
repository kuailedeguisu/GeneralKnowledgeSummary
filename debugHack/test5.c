#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* p = malloc(sizeof(int));
    free(p);
    free(p);
    return EXIT_SUCCESS;
}