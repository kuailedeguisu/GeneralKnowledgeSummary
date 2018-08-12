#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctype.h>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string str1 = "I am a girl, please call me madam!";
    for (auto& c1 : str1)
    {
        c1 = tolower(c1);
    }
    cout << str1 << endl;

    for (auto& c2 : str1)
    {
        c2 = toupper(c2);
    }
    cout << str1 << endl;

    string str2 = "I am a beautiful girl!";
    for (auto c3 : str2)
        putchar(c3);
    cout << endl;

    return 0;

}