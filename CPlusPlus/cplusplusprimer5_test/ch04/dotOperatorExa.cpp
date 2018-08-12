#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    vector<int> ivec(10);
    auto cnt = ivec.size();

    for (auto ix = 0; ix != ivec.size(); ++ix, --cnt)
    {
        ivec[ix] = cnt;
    }

    for (auto& i : ivec)
        cout << i << " ";
    cout << endl;

    return 0;
}