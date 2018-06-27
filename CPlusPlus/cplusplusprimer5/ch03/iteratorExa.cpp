#include <iostream>
#include <vector>
#include <string>
#include <ctype.h>
#include <stdlib.h>

using std::string;
using std::vector;
using std::cout;
using std::endl;

int main()
{
    string str = "some thing";
    if (str.begin() != str.end())
    {
        auto iter = str.begin();
        *iter = toupper(*iter);
    }
    cout << str << endl;

    string str1 = "some thing";
    for (auto iter = str1.begin(); iter != str1.end() && !isspace(*iter); ++iter)
        *iter = toupper(*iter);
    cout << str1 << endl;

    vector<string> svec = {"hello", " ", "world"};
    for (auto iter = svec.begin(); iter != svec.end() && !iter->empty(); ++iter)
        cout << *iter;
    cout << endl;

    return 0;
}