#include <iostream>
#include <string.h>//cstring.h:can't find the file in standard libary
#include <cstring>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{

    char str1[] = "Hello World!";
    char str2[] = "What is your name?How are you?";

    cout << "The length of str1 is " << strlen(str1) << endl;
    cout << "The length of str2 is " << strlen(str2) << endl;

    cout << "Compare str1 with str2: " << strcmp(str1, str2) << endl;

    cout << "Append str2 to str1:"  << strcat(str1, str2) << endl;

    cout << "Copy str2 to str1:" << strcpy(str1, str2) << endl;//Why W is lost?
    cout << "str1 after coping str2:" << str1 << endl;//Why W is lost?

    char cStr[20];
    string strxx = "Hello world!";
    strcpy(cStr, strxx.c_str());
    cout << cStr << endl;

    int arr[] = {0,1,2,3,4,5};
    vector<int> ivec(std::begin(arr), std::end(arr));

    for (auto& i : ivec)
        cout << i << " ";
    cout << endl;

    return 0;
}