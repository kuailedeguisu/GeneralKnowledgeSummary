#include <iostream>
using std::cout;
using std::endl;

int get_size()
{
    return 100;
}

int main()
{
    begin:
        int sz = get_size();
        cout << sz << endl;

        if (sz <= 0)
        {
            cout << sz << endl;
            goto begin;
        }

    return 0;
}