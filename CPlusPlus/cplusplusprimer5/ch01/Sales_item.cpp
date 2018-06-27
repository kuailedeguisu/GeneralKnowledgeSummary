#include "Sales_item.hpp"

/*Sales_item::Sales_item(
    std::string isbn,
    float perPrice,
    unsigned nums
):
    myIsbn(isbn),
    myPerPrice(perPrice),
    myNums(nums)
{

}

Sales_item::Sales_item(const Sales_item& src)
{
    myIsbn = src.getIsbn();
    myNums = src.getNums();
    myPerPrice = src.getPerPrice();
}

bool Sales_item::operator==(const Sales_item& src)
{
    return myIsbn == src.getIsbn() &&
        myPerPrice == src.getPerPrice() &&
        myNums == src.getNums();
}

Sales_item& Sales_item::operator=(const Sales_item& src, Sales_item& dest)
{
    if (dest == src)
        return *this;

    this->myIsbn = src.getIsbn();
    this->myPerPrice = src.getPerPrice();
    this->myNums = src.getNums();

    return *this;
}

Sales_item::~Sales_item()
{

}

Sales_item& Sales_item::operator+(const Sales_item& item1, const Sales_item& item2)
{
    Sales_item tmpItem("", 0, 0.0);

    if (item1.getIsbn() == item2.getIsbn())
    {
        tmpItem.myIsbn = item1.getIsbn();
        tmpItem.myNums = item1.getNums() + item2.getNums();
        tmpItem.myPerPrice = (computeTotalPrice(item1) + computeTotalPrice(item2)) / tmpItem.myNums; 
    }
    else
    {
        std::cout << "They can not be added because they have different isbn." << std::endl;
    }

    return tmpItem;
}

float Sales_item::computeTotalPrice(const Sales_item& item)
{
    return item.getNums() * item.getPerPrice();
}

std::string Sales_item::getIsbn() const
{
    return myIsbn;
}

void Sales_item::setIsbn(std::string isbn)
{
    myIsbn = isbn;
}

int Sales_item::getNums() const
{
    return myNums;
}

void Sales_item::setNums(int nums)
{
    myNums = nums;
}
    
void Sales_item::setPerPrice(float perPrice)
{
    myPerPrice = perPrice;
}

float Sales_item::getPerPrice() const
{
    return myPerPrice;
}

int main()
{
    Sales_item item1("0-201-899-0", 5.0, 2);//construction function
    Sales_item item2("0-201-899-0", 6.5, 3);
    Sales_item item3(item1);//copy construction function
    Sales_item item4 = item1;//assignment operator
    Sales_item item5("0-901", 4.0, 3);
    Sales_item item6 = item1 + item2;

    std::cout << "item1 + item2:" << item6.getPerPrice() << std::endl;//operator + with the same isbn
    std::cout << "item4:" << item4.getPerPrice() << std::endl;
    //std::cout << "item1 + item5:" << item1 + item5 << std::endl;//operator + with different isbn

    return 0;
}*/

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

    return 0;
}