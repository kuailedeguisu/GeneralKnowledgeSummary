#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int iVal = 45;
    int *p = &iVal;
    int arr[] = {0,1,2,3,4,5,6,7,8,9};

    cout << "sizeof of int is " << sizeof(iVal) << endl;//4
    cout << "sizeof of int* is " << sizeof(p) << endl;//8
    cout << "sizeof of int* pointed to int is " << sizeof(*p) << endl;//4
    cout << "The number of elements is " << sizeof(arr)/sizeof(arr[0]) << endl;

    return 0;
}