#include <iostream>
using namespace std;

void print(const char* str)
{
    int len = 0;
    for (auto i = 0; str[i] != '\0'; ++i)
    {
        len++;
    }

    for (int i = 0; i < len; ++i)
    {
        cout << str[i] << " ";
    }

    cout << endl;
}

void print(const int* beg, const int* end)
{
    while(beg != end)
    {
        cout << *beg++ << " ";
    }
    cout << endl;
}

void print(const int arr[], size_t sz)
{
    for (int i = 0; i < sz; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int arrInt[] = {0,1,2,3,4,5};
    print("Hello World!");
    print(arrInt, end(arrInt) - begin(arrInt));
    print(begin(arrInt), end(arrInt));
    return 0;
}