#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> svec = {"Hello World!", "Hi!", "How are you!", "My name is LCH."};

    for (const auto& s : svec)
    {
        cout << s;

        if (s.empty() || s[s.size() - 1] == '!' || s[s.size() - 1] == '.')
        {
            cout << endl;
        }
        else
        {
            cout << " ";
        }
    }
    return 0;
}