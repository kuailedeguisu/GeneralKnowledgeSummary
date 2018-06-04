#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    FILE* fp;
    fp = fopen("/etc/shadow", "w");
    if (fp == NULL)
    {
        printf("Error!\n");
    }
    else
    {
        fclose(fp);
    }
    sleep(1000);

    return EXIT_SUCCESS;
}