#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string str = "Hello world!";
    string *ptr = &str;
    cout << ptr->size() << endl;
    cout << (*ptr).size() << endl;

    return 0;
}