#include <iostream>
#include "Sales_data.hpp"

int main()
{
    Sales_data data1, data2;

    double price;
    std::cin >> data1.bookNo >> data1.units_sold >> price;//we can visit all data member because the data member in struct is defaut public
    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    data2.revenue = data2.units_sold * price;

    if (data1.bookNo == data2.bookNo)
    {
        int totalCnt = data1.units_sold + data2.units_sold;
        double totalRev = data1.revenue + data2.revenue;

        if (totalCnt)
        {
            double avgRev = totalRev / totalCnt;
            std::cout << "The average of revenue is " << avgRev << std::endl;
        }
        else
        {
            std::cout << "The total number sold is zero" << std::endl;
        }
    }
    else
    {
        std::cerr << "Data you have entered has different ISBN" << std::endl;
    }

}