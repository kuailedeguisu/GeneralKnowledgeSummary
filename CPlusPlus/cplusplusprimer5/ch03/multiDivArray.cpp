#include <iostream>
#include <iterator>

using std::cout;
using std::endl;

int main()
{
    constexpr size_t rowCnt = 3, colCnt =4;
    int arr[rowCnt][colCnt];
    /*for (auto i = 0; i != rowCnt; ++i)
    {
        for (auto j = 0; j != colCnt; ++j)
        {
            arr[i][j] = i * colCnt + j;
            cout << arr[i][j] << " ";
        }
    }

    cout << endl;*/

    int cnt = 0;
    for (auto& row : arr)
    {
        for (auto& col : row)
        {
            col = cnt;
            ++cnt;
            //cout << col << " ";
        }
    }
    //cout << endl;

    for (auto p = std::begin(arr); p != std::end(arr); ++p)
    {
        for (auto q = std::begin(*p); q != std::end(*p); ++q)
        {
            cout << *q << " ";
        }
    }
    cout << endl;

    return 0;
}