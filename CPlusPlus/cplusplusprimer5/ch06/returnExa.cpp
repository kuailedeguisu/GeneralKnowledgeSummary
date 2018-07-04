#include <iostream>
#include <cstdlib>

using namespace std;

void swap(int& v1, int& v2)
{
    if (v1 == v2)
    {
        return;
    }

    int tmp = v1;
    v1 = v2;
    v2 = tmp;
}

bool str_range(const string& str1, const string& str2)
{
    if (str1.size() == str2.size())
    {
        return str1 == str2;
    }

    size_t size = str1.size() < str2.size() ? str1.size() : str2.size();

    for (decltype(size) i = 0; i != size; ++i)
    {
        if (str1[i] != str2[i]){
            return false;
        }
    }

    return true;
}

const string& shorterString(const string& str1, const string& str2)
{
    return (str1.size() < str2.size()) ? str1 : str2;
}

string make_plural(size_t ctr, const string& word, const string& ending)
{
    return ctr > 1 ? (word + ending) : word;
}

char& get_val(string& str, string::size_type ix)
{
    return str[ix];
}

int factorial(int val)
{
    if (val > 1)
    {
        return factorial(val - 1) * val;
    }

    return 1;
}


//int (*func(int i))[10]

//auto func(int i) -> int (*)[10]

int odd[] = {1, 3, 5, 7, 9};
int even[] = {2, 4, 6, 8, 10};
decltype(odd) *arrInt(int i)
{
    return (i % 2 == 0) ? &even : &odd;
}

int main()
{
    int a = 10, b = 20;
    cout << "a = " << a << "," << "b = " << b << endl;
    cout << "After swap:" << endl;
    swap(a, b);
    cout << "a = " << a << "," << "b = " << b << endl; 

    const string str1 = "Hello world!";
    const string str2 = "Hello";
    cout << str_range(str1, str2) << endl;
    const string str3 = "abcd";
    const string str4 = "bbdd";
    cout << str_range(str3, str4) << endl;

    cout << make_plural(2, "book", "s") << endl;

    cout << shorterString("hello", "hello world") << endl;

    string str = "a value";
    cout << str << endl;
    get_val(str, 0) = 'A';
    cout << str << endl;

    cout << "The factorial is " << factorial(5) << endl;

    cout << "odd:" << *arrInt(5) << endl;
    cout << "even:" << *arrInt(4) << endl;

    bool flag = 1;
    if (flag)
    {
        cout << EXIT_FAILURE << endl;//1
        return EXIT_FAILURE;
    }
    else
    {
        cout << EXIT_SUCCESS << endl;//0
        return EXIT_SUCCESS;
    }
}