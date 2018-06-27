#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
    //string initialization
    string s1;//default initialization
    string s2 = s1;//copy initialization
    string s3 = "Hello world!";//copy initialization
    string s4(10,'c');//direct initialization
    string s5 = string(20, 'a');//copy initialization, string tmp(20,'a'); string s5 = tmp;

    cout << "s1:" << s1 << ",size is " << s1.size() << endl;
    cout << "s2:" << s2 << ",size is " << s2.size() << endl;
    cout << "s3:" << s3 << ",size is " << s3.size() << endl;
    cout << "s4:" << s4 << ",size is " << s4.size() << endl;
    cout << "s5:" << s5 << ",size is " << s5.size() << endl;

    //string operation

    /*string cStr;
    cin >> cStr;//Hello World!
    cout << "cStr:" << cStr << endl;//Hello


    string cStr1, cStr2;
    cin >> cStr1 >> cStr2;//Hello World
    cout << "cStr1:" << cStr1 << "," << "cStr2:" << cStr2 << endl;//cStr1:Hello,cStr2:World*/

    string loopCStr;
    while (getline(cin, loopCStr))
        if (!loopCStr.empty() && loopCStr.size() > 10)
            cout << loopCStr << endl;

    string str1 = "Hello";
    string str2 = "Hello World!";
    string str3 = "Hi!";
    cout << "str1 < str2:" << (str1 < str2) << endl;
    cout << "str3 > str1:" << (str3 > str1) << endl;
    cout << "str3 > str2:" << (str3 > str2) << endl;

    string str4(10, 'c');
    string str5;
    cout << "str4:" << str4 << endl;
    cout << "str5:" << str5 << endl;

    str4 = str5;
    cout << "str4:" << str4 << endl;
    cout << "str5:" << str5 << endl;

    string str6 = str2 + "\n" + str3;
    cout << "str6:\n" << str6 << endl;

    return 0;
}