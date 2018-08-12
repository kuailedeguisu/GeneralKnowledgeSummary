#include <iostream>
#include "Chapter06.hpp"

using namespace std;

int main()
{
    //compute the count of calls
    for (auto i = 0; i < 10; ++i)
        cout << calls_count() << " ";
    cout << endl;

    return 0;
}


