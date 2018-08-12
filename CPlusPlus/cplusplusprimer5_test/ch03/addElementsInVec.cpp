#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    vector<int> ivec;
    
    for (unsigned int i = 0; i < 1000; ++i)
        ivec.push_back(i);
    
    for (auto& i : ivec)
        cout << i << " ";
    cout << endl;

    vector<int> ivec1 = {1,2,3,4,5,6,7,8,9};
    for (auto&i : ivec1)
        i *= i;
    for (auto&i : ivec1)
        cout << i << " ";
    cout << endl;

    vector<int> ivec2;
    cout << "ivec2 size:" << ivec2.size() << "," << ivec2.empty() << endl;

    string word;
    vector<string> svec;
    while (cin >> word)
        svec.push_back(word);
    
    for (auto& s : svec)
        cout << s << " ";
    cout << endl;

    return 0;
}
