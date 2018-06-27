#include "Sales_item.hpp"

inline bool isSameIsbn(const Sales_item& lhs, const Sales_item& rhs)
{
    return lhs.getIsbn() == rhs.getIsbn();
}

Sales_item operator+(const Sales_item&, const Sales_item&);

bool operator==(const Sales_item& lhs, const Sales_item& rhs)
{
    return lhs.getIsbn() == rhs.getIsbn() &&
        lhs.getUnitsSold() == rhs.getUnitsSold() &&
        lhs.getRevenue() == rhs.getRevenue();
}
bool operator<(const Sales_item& lhs, const Sales_item& rhs)
{
    return lhs < lhs;
}

inline bool operator!=(const Sales_item& lhs, const Sales_item& rhs)
{
    return !(lhs == rhs);
}

Sales_item& Sales_item::operator+=(const Sales_item& rhs)
{
    if (isSameIsbn(*this, rhs))
    {
        units_sold += rhs.getUnitsSold();
        revenue += rhs.getRevenue();
    }

    return *this;
}

Sales_item operator+(const Sales_item& lhs, const Sales_item& rhs)
{
    Sales_item ret(lhs);
    ret += rhs;
    return ret;
}

std::istream& operator>>(std::istream& in, Sales_item& s)
{
    double price;

    if (s.bookNo == " ")
    {
        std::cout << "Please enter your isbn then sold numbers then price:" << std::endl;
        in >> s.bookNo >> s.units_sold >> price;
    }
    else
    {
        std::cout << "Please enter your sold numbers then price:" << std::endl;
        in >> s.units_sold >> price;
    }


    if (in)
        s.revenue = s.units_sold * price;
    else
        s=Sales_item();

    return in;
}

std::ostream& operator<<(std::ostream& out, Sales_item& s)
{
    out << s.getIsbn() << " " << s.getUnitsSold() << " " << s.avg_price();
    return out;
}

double Sales_item::avg_price() const
{
    if (units_sold)
        return revenue / units_sold;
    else
        return 0.0;
}

std::string Sales_item::getIsbn() const
{
    return bookNo;
}

unsigned Sales_item::getUnitsSold() const
{
    return units_sold;
}

double Sales_item::getRevenue() const
{
    return revenue;
}

int main()
{
    Sales_item item1("0-201-909-908");
    Sales_item item2("0-201-909-908");

    std::cin >> item1;
    std::cin >> item2;

    std::cout << "item1:" << item1 << std::endl;
    std::cout << "item2:" << item2 << std::endl;

    Sales_item item3("0-201-909-908");
    item3 = item1 + item2;
    item2 += item1;

    std::cout << "item1 + item2:" << item3 << std::endl;
    std::cout << "item2+=item1:" << item2 << std::endl;

    std::cout << "avg_price for item1:" << item1.avg_price() << std::endl;
    std::cout << "avg_price for item1 + item2:" << item3.avg_price() << std::endl;

    //count all sold numbers
    
    Sales_item total;
    if (std::cin >> total)
    {
        Sales_item trans;

        while (std::cin >> trans)
        {
            if (trans.getIsbn() == total.getIsbn())
            {
                total += trans;
            }
            else
            {
                std::cout << total << std::endl;
                total = trans;
            }
        }

        std::cout << total << std::endl;

    }
    else
    {
        std::cout << "No data?" << std::endl;
        return -1;
    }

    return 0;
}

/*
the result is strange:
for count all sold numbers,
it should have empty isbn, so we should enter isbn, but it needed?
*/