#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec;
    int i;

    while(cin >> i)
    {
        ivec.push_back(i);
    }

    vector<int>::iterator iter = ivec.begin();
    while (iter != ivec.end() && *iter >= 0)
    {
        ++iter;
    }

    if (iter == ivec.end())
    {
        cout << "All numbers are not negative." << endl;
    }
    else
    {
        cout << "The first negative number is " << *iter << endl;
    }

    return 0;
}