#include <iostream>
#include <string>
#include <vector>

using namespace std;

void findCharAllIndexsAndCount(const string& str,
                      const char& target,
                      unsigned int& count,
                      vector<unsigned int>& indexVec)
{
    unsigned int len = str.size();
    if (len == 0)
        return;

    for (auto i = 0; i < len; ++i)
    {
        if (str[i] == target)
        {
            indexVec.push_back(i);
            count++;
        }

    }

}

int main()
{
    string myStr = "aaaaaaaaaaaabbbbbbbbbbbbbbbbbccccccccccccccaaaaaaaaaaaaarrrrrrrriiiiiiiiiii";
    unsigned int count = 0;
    vector<unsigned int> indexVec;
    findCharAllIndexsAndCount(myStr, 'a', count, indexVec);

    cout << "The occurances of a is " << count << endl;

    cout << "The index of a is " << endl;
    for (auto i : indexVec)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}