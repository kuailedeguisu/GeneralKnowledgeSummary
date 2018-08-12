#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    unsigned int inScore;
    vector<unsigned int> cnt(11);

    /*while (cin >> inScore)
    {
        if (inScore <= 100)
            for (int i = 0; i <= 10; ++i)
                if (inScore / 10 == i)
                    cnt[i]++;
    }*/
    while (cin >> inScore)
    {
        if (inScore <= 100)
        {
            ++cnt[inScore/10];
        }
    }

    for (auto& i : cnt)
        cout << i << " ";
    cout << endl;

    return 0;
}