#include <stdio.h>

int global;
int func_op(void) {return 0;}

void func(void)
{
    unsigned long long val64 = 0;
    val64 = 0xffffeeeeddddccc;
    global = 0x5555;
    printf("%llu\n",val64);
    printf("%d\n", global);
}

#define MAX_WORD 16

int main()
{
    unsigned int i = 0;
    char words[MAX_WORD] = "Hello World!";
    char word;
    
    int (*func_pointer)(void) = &func_op;

    i = 0xabcd;

    if (i != 0x1234)
    {
        i = 0;
    }

    while (i == 0)
    {
        i++;
    }

    func();
    i = func_pointer();

    for (int i = 0; i < MAX_WORD - 1; i++)
    {
        word = words[i];
        printf("%c ", word);
    }

    return 0;
}