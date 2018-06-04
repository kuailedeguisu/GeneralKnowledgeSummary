#include <stdio.h>

int max(const int& a, const int& b)
{
    int* pInt = NULL;
    printf("%d",*pInt);
    return a > b ? a : b;
}

int main()
{
    int a = 5, b = 6;
    printf("%d", max(a,b));
    return 0;
}