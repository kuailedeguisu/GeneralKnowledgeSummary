#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string rsp;
    do
    {
        cout << "Please enter two integers:" << endl;
        int val1, val2;
        cin >> val1 >> val2;
        cout << "The sum of " << val1 << " and " << val2 << " is " << val1 + val2 << endl;
        cin >> rsp;
    }
    while (!rsp.empty() && rsp[0] != 'n');

    return 0;
}