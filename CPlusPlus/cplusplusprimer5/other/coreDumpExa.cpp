#include <iostream>
using namespace std;
int max(const int& a, const int& b)
{
    int* pInt = NULL;
    cout << *pInt << endl;
    return a > b ? a : b;
}

int main()
{
    int a = 5, b = 6;
    cout << max(a,b) << endl;
    return 0;
}