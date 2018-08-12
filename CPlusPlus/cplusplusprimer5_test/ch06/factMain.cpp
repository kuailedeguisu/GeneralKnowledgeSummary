#include <iostream>
#include "Chapter06.hpp"
using namespace std;

int main ()
{
    //compute the fact of one entered integer
    cout << "Please enter an integer:" << endl;
    unsigned int num;
    cin >> num;

    if (num < 1)
        cout << "Invalid input" << endl;
    else
        cout << "The fact of " << num << " is " << computeFact(num) << endl;

    return 0;
}