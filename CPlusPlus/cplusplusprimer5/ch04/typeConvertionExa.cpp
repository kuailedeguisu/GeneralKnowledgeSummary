#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int i = 3.14 + 3;
    int j = 10;
    void* p  = &i;
    double* q = static_cast<double*>(p);
    
    cout << i << endl;//6
    cout << (static_cast<double>(j) / i) << endl;//1.6667
    cout << p << endl;//8
    cout << q << endl;//8

    return 0;
}