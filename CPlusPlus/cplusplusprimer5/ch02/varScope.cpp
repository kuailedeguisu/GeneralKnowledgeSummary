#include <iostream>

int reused = 42;

int main()
{
    int cur = 0;
    std::cout << reused << " " << cur << std::endl;

    int reused = 0;
    std::cout << reused << " " << cur << std::endl;

    std::cout << ::reused << " " << cur << std::endl;

    return 0;
}