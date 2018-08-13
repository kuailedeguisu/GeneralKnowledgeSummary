#include <vector>
#include <list>
#include <string>
#include <deque>
#include <iostream>

using namespace std;

int main()
{
    vector<int> intVec(10, 5);
    cout << "First print:" << endl;
    for (auto iter = intVec.cbegin(); iter != intVec.cend(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << endl;

    vector<string> strVec(10, 'abc');
    cout << "Second print:" << endl;
    for (auto iter = strVec.cbegin(); iter != strVec.cend(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << endl;

    deque<string> strDeq(strVec.begin(), strVec.begin() + 5);
    cout << "Third print:" << endl;
    for (auto iter = strDeq.cbegin(); iter != strDeq.cend(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}