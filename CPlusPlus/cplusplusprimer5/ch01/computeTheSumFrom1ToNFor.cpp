#include <iostream>

int main()
{
    std::cout << "Please enter an integer:" << std::endl;

    int maxInt = 0;
    int sum = 0;

    std::cin >> maxInt;

    if (maxInt < 1)
        return -1;
    
    for (int val = 1; val <= maxInt; ++val)
    {
        sum += val;
    }

    std::cout << "The sum from 1 to " << maxInt << " is " << sum << std::endl;

    return 0;
}