#include <iostream>
#include "Debug.hpp"
using namespace std;

int main()
{
    constexpr Debug stub(false, true, false);
    if (stub.any())//if any() function is not declared const, it will report "passing "const Debug" as "this" argument qualifiers" compiling error
    {
        cout << "Before:Any is true" << endl;
    }
    else
    {
        cout << "Before:No is true" << endl;
    }

    Debug xx(false, true, false);
    xx.set_io(false);//if xx is not declared non-const, it can't call set_io() non-const function
    if (xx.any())
    {
        cout << "After:Any is true" << endl;
    }
    else
    {
        cout << "After:No is true" << endl;
    }

    return 0;
}