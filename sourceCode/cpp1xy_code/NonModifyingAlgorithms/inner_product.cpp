#include <vector>
#include <iostream>
#include <numeric>

using namespace std;

int main()
{
	vector<int> v1 = {1,2,3,4};
	vector<int> v2 = {9,8,7,6};
	cout << inner_product(v1.cbegin(), v1.cend(),
		v2.cbegin(), 0) << endl;

	return 0;
}
