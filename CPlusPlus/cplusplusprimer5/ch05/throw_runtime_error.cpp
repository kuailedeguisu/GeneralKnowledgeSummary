#include <stdexcept>
#include <iostream>
#include "../ch01/Sales_item.hpp"

int main()
{
    Sales_item item4("099-088-077");
    Sales_item item5("099-066-077");
    if (item4.isbn() != item5.isbn())
        throw std::runtime_error("Data must have the same isbn.");

    /*try
    {
        std::cout << "Normal procedure." << std::endl;
    }
    catch (std::runtime_error err)
    {
        std::cout << err.what() << std::endl;
    }*/

    std::cout << "You can do other operation." << std::endl;

    return 0;
}