#include <iostream>
using namespace std;

void printString(const char* str)
{
    if (str)
    {
        while (*str)
        {
            cout << *str++;
        }

        cout << endl;
    }
}

void printIntArray(const int* beg, const int* end)
{

    while (beg != end)
    {
        cout << *beg++ << " ";
    }
    cout << endl;
}

void printIntArrayWithSize(const int arr[], unsigned int size)
{
    for (auto i = 0; i != size; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void printIntArrayWithReferenceParam(int (&arr)[6])//the size of this array in form parameter is the same as the actual parameter
{
    for (auto& elem : arr)
    {
        cout << elem << " ";
    }

    cout << endl;
}

void errorMsg(initializer_list<string> error)
{
    for (auto iter = error.begin(); iter != error.end(); ++iter)
    {
        cout << *iter << " ";
    }

    cout << endl;
}
int main()
{
    printString("Hello World!");
    const int intArr[] = {0, 10, 20, 30};
    const int intArr2[] = {0, 90, 190, 200, 300};
    int intArr3[] = {0, 1, 2, 3, 4, 5};

    printIntArray(&intArr[1], &intArr[3]);
    printIntArray(begin(intArr), end(intArr));
    printIntArrayWithSize(intArr2, end(intArr2) - begin(intArr2));//undefined values are random
    printIntArrayWithReferenceParam(intArr3);

    errorMsg({"hello", "world", "hi", "elegant"});

    return 0;
}