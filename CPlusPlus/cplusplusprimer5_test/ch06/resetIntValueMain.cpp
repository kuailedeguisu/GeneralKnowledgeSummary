#include <iostream>
using namespace std;

void resetIntValue(int& fromValue)
{
    fromValue = 0;
}

int main()
{
    int myValue = 42;
    cout << "Original value is " << myValue << endl;

    resetIntValue(myValue);
    cout << "Lastest value is " << myValue << endl;

    return 0;
}