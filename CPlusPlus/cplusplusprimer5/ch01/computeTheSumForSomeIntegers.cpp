#include <iostream>

int main()
{
    std::cout << "Please enter some integers:" << std::endl;

    int val = 0, sum = 0;
    while(std::cin >> val)
    {
        sum += val;
    }

    std::cout << "The sum for the entered integers is " << sum << std::endl;

    return 0;
}