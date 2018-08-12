#include <iostream>
#include <iterator>
#include <algorithm>

using std::cout;
using std::endl;

int main()
{
    int arr[] = {90, 40, 50, 100, 40, 60};

    std::for_each(std::begin(arr), std::end(arr),
        [](int n){
             cout << n << " ";
        });
    cout << endl;

    return 0;
}