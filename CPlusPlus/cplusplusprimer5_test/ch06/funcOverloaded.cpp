#include <iostream>
using namespace std;

void print(const char* str)
{
    int len = 0;
    for (auto i = 0; str[i] != '\0'; ++i)
    {
        len++;
    }

    for (int i = 0; i < len; ++i)
    {
        cout << str[i] << " ";
    }

    cout << endl;
}

void print(const int* beg, const int* end)
{
    while(beg != end)
    {
        cout << *beg++ << " ";
    }
    cout << endl;
}

void print(const int arr[], size_t sz)
{
    for (int i = 0; i < sz; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

const string& shorterString(const string& str1, const string& str2)
{
    return str1.size() < str2.size() ? str1 : str2;
}

string& shorterString(string& str1, string& str2)
{
    auto &r = shorterString(const_cast<const string&>(str1), const_cast<const string&>(str2));
    return const_cast<string&> (r);
}

int main()
{
    int arrInt[] = {0,1,2,3,4,5};
    print("Hello World!");
    print(arrInt, end(arrInt) - begin(arrInt));
    print(begin(arrInt), end(arrInt));
    cout << shorterString("Hello", "Hello World!") << endl;

    string str1, str2;
    cin >>str1 >> str2;

    cout << shorterString(str1, str2) << endl;

    return 0;
}