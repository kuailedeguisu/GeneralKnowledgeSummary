#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int arr[] = {0, 2, 4, 6, 8, 10};

    int *ptr = &arr[2];

    cout << *ptr << endl;//4
    cout << ptr[2] << endl;//8
    cout << ptr[-2] << endl;//0

    return 0;
}