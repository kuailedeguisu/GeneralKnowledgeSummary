#include <iostream>
using namespace std;

const double PI = 3.14;
const char* const authorName = "Scott Meryer";

template <typename T>
inline T& max(const T& a, const T& b) 
{
    return (a) > (b) ? (a) : (b);
}

int main()
{
    cout << "PI=" << PI << endl;
    cout << "author name = " << authorName << endl;

    int a = 5, b =0;
    double c = 10.9, d = 10.8;
    cout << max(a,b) << endl;
    //cout << max(c,d) << endl;
    return 0;
}