#include <iostream>

using std::cout;
using std::endl;

int main()
{
    unsigned long quiz = 0;
    quiz |= 1UL << 27;
    cout << quiz << endl;//passed, the 27th number is 1

    unsigned long quiz1 = 0;
    quiz1 &= ~(1UL << 27);
    cout << quiz1 << endl;//failed, the 27th number is 0

    return 0;
}