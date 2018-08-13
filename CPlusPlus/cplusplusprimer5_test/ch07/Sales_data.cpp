#include <iostream>
#include "Sales_data.hpp"

/*Sales_data(const std::string& isbn,
    const unsigned units_sold,
    const double revenue) :
    bookNo(isbn),
    units_sold(units_sold),
    revenue(revenue)
    {}

Sales_data& Sales_data(const Sales_data& rhs)
{
    this->bookNo = rhs.bookNo;
    this->units_sold = rhs.units_sold;
    this->revenue = rhs.revenue;

    return *this;

}
Sales_data& operator=(const Sales_data& rhs)
{
    if (*this == rhs)
    {
        return *this;
    }

    this->bookNo = rhs.bookNo;
    this->units_sold = rhs.units_sold;
    this.revenue = rhs.revenue;

    return *this;

}*/
Sales_data::Sales_data(std::istream& is)
{
    read(is, *this);
}

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;

    return *this;

}
double Sales_data::avg_price() const
{
    if (units_sold)
    {
        return revenue/units_sold;
    }
    else
    {
        return 0.0;
    }
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);

    return sum;
}

std::ostream& print(std::ostream& os, const Sales_data& item)
{
    os << item.isbn() << "," << item.units_sold
       << "," << item.revenue << "," << item.avg_price() << std::endl;

    return os;

}

std::istream& read(std::istream& is, Sales_data& item)
{
    double price = 0.0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    return is;
}

int main()
{
    Sales_data total;

    if (read(std::cin, total))
    {
        Sales_data trans;
        while(read(std::cin, trans))
        {
            if (total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                print(std::cout, trans);
                total  = trans;
            }
        }
        print(std::cout, total);
    }
    else
    {
        std::cerr << "No data?" << std::endl;
    }

    return 0;
}