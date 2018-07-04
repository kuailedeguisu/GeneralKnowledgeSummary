#include <iostream>
#include <string>
#include <vector>

using namespace std;

string::size_type findCharTheFirstIndexAndCount(const string& str,
                      const char& target,
                      unsigned int& count)
{
    auto ret = str.size();

    for (decltype(ret) i = 0; i != str.size(); ++i)
    {
        if (str[i] == target)
        {
            if (ret == str.size())//only the first occurs, ret will be set as i, otherwise it is not changed
            {
                ret = i;
            }
            count++;
        }

    }

    return ret;

}

bool isSentence(const string& str)
{
    unsigned int count = 0;

    return (findCharTheFirstIndexAndCount(str, '.', count) == str.size() - 1) &&
        (count == 1);
}

int main()
{
    string myStr = "aaaaaaaaaaaabbbbbbbbbbbbbbbbbccccccccccccccaaaaaaaaaaaaarrrrrrrriiiiiiiiiii.";
    unsigned int count = 0;
    cout << "The first index of b is " << findCharTheFirstIndexAndCount(myStr, 'b', count) << endl;

    cout << "The occurances of a is " << count << endl;

    cout << "Is it a sentence ? " << isSentence(myStr) << endl;

    return 0;
}