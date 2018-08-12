#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    unsigned int scores[11] = {};
    unsigned int grade;

    while (cin >> grade)
    {
        if (grade <= 100)
        {
            ++scores[grade / 10];
        }
    }
    
    for (auto& i : scores)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;

}