#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    cout << "Please enter some string not string with '_'";
    string buf;
    while (cin >> buf && !buf.empty())
    {
        if (buf[0] != '_')
            continue;
    }

    cout << buf << endl;

    return 0;
}