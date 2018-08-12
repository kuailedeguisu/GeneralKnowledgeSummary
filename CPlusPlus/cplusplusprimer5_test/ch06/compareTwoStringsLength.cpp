#include <string>
#include <iostream>

using namespace std;

bool isShorter(const string& frontStr,
               const string& behindStr)
{
    return frontStr.size() < behindStr.size();
}

int main()
{
    string str1 = "Hello world!";
    string str2 = "I am a girl. And you?";
    
    cout << "str1 is shorter than str2? " << isShorter(str1, str2) << endl;

    return 0;
}