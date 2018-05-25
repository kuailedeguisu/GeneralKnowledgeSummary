<<<<<<< HEAD
#include <stdio.h>

int max(const int& a, const int& b)
{
    int* pInt = NULL;
    printf("%d",*pInt);
=======
#include <iostream>
using namespace std;
int max(const int& a, const int& b)
{
    int* pInt = NULL;
    cout << *pInt << endl;
>>>>>>> debugHack source code
    return a > b ? a : b;
}

int main()
{
    int a = 5, b = 6;
<<<<<<< HEAD
    printf("%d", max(a,b));
=======
    cout << max(a,b) << endl;
>>>>>>> debugHack source code
    return 0;
}