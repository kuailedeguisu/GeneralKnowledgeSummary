#include <iostream>
#include <string>
#include <ctype.h>
#include <stdlib.h>

using std::cout;
using std::string;
using std::endl;

int main()
{
    string str = "hello world!";
    if (!str.empty())
        str[0] = toupper(str[0]);
    cout << str << endl;

    string str1 = "some thing";
    for (decltype(str1.size()) index = 0; index != str1.size() && !isspace(str1[index]); ++index)
        str1[index] = toupper(str1[index]);
    cout << str1 << endl;


    return 0;
}