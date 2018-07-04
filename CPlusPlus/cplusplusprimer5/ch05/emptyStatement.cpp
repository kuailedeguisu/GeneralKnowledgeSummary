#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num;
    int target = 100;
    while (cin >> num && num != target)
    {
        cout << num << " ";
    }

    cout << num << endl;

    return 0;
}