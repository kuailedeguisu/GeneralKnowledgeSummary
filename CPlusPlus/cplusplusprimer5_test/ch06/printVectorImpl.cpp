#include <iostream>
#include <vector>
#include "Chapter06.hpp"

using namespace std;

void printVector(vector<int>& myIntVec)
{
    for (auto it = myIntVec.begin(); it != myIntVec.end(); ++it)
        cout << *it << " ";

    cout << endl;
}