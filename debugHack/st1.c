#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fp;
    fp = fopen("/etc/shadow", "w");
    if (fp == NULL)
    {
        printf("Error!\n");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}