#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a;
    int* p = &a;
    p -= 0x100;
    *p = 1;
    return EXIT_SUCCESS;
}