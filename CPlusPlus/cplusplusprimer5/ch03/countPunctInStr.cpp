#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

int main ()
{
    string str = "Hello World!!!Hi!What is your name?My name is LCH!";
    decltype(str.size()) punct_cnt = 0;
    for (auto c : str)
        if (ispunct(c))
            punct_cnt++;
    cout << punct_cnt << " punctuation characters in  " << str << endl;

    return 0;
}