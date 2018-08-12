#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main ()
{
    string str = "0123456789ABCDEF";
    string result;
    string::size_type n;
    cout << "Please enter the number from 1 to 15:" << endl;

    while (cin >> n)
    {
        if (n < str.size())
            result += str[n];
    }

    cout << result << endl;

    return 0;
}