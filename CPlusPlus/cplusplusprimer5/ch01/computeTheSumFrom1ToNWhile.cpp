#include <iostream>

int main()
{
    std::cout << "Please enter the integer N :" << std::endl;
    int val = 1;
    int sum = 0;
    int maxInt = 0;
    std::cin >> maxInt;

    if (maxInt < 1)
        return -1;
    
    while(val <= maxInt)
    {
        sum += val;
        val++;
    }
    
    std::cout << "The sum from 1 to " << maxInt << " is " << sum << std::endl;
    
    return 0;
    
}