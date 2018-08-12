#include <iostream>
#include <iterator>
#include <algorithm>

using std::cout;
using std::endl;

int main()
{
    int arr[] = {10, 20, 30, -89, 90, -90, 100};

    /*find all negative itegers
    std::for_each(std::begin<int>(arr), std::end<int>(arr),
        [](int n) {
            if ( n < 0)
            {
                cout << n;
            }
        });*/
    int *beg = std::begin(arr);
    int *end = std::end(arr);

    while (beg != end && *beg >= 0)
    {
        ++beg;
    }

    cout << *beg << endl;

    return 0;
}