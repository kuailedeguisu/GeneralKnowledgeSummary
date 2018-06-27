#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::cout;
using std::endl;
using std::string;

/*
* This is only used in the following situation:
* 1) initialization elements are not a lot
* 2) the same element occurs in a vector
* 3) copy a vector to the current vector*
*/
int main()
{
    vector<int> ivec1;
    for (auto& i : ivec1)
        cout << i << ",";
    cout << endl;

    vector<int> ivec2 = {1, 2, 3, 4, 5};
    for (auto& i : ivec2)
        cout << i << ",";
    cout << endl;

    vector<int> ivec3(10);
    for (auto& i : ivec3)
        cout <<  i << " ";
    cout << endl;

    vector<string> svec1={10, "hello"};
    for (auto& c : svec1)
        cout << c << " ";
    cout << endl;

    vector<string> svec2 = {"Aa", "Bb", "Cc"};
    for (auto& c : svec2)
        cout << c << " ";
    cout << endl;

    vector<string> svec3(10);
    for (auto& c : svec3)
        cout << c << " ";
    cout << endl;

    return 0;
}