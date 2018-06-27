#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

bool binarySearch(vector<int>& nums, int target)
{
    if (nums.empty())
        return false;
    
    vector<int>::iterator beg = nums.begin(), end = nums.end();
    vector<int>::iterator mid = beg + (end - beg) / 2;

    while (mid != end && *mid != target)
    {
        if (*mid < target)
            beg = mid + 1;
        else if (*mid > target)
            end = mid - 1;
        mid = beg + (end - beg) / 2;
    }

    if (mid == end)
        return false;
    else
        return true;
}

int main()
{
    vector<int> ivec = {1,3,5,8,9,10,19};
    int target = 10;

    if (binarySearch(ivec, target))
        cout << "Found it." << endl;
    else
        cout << "Not found." << endl;

    return 0;
}
