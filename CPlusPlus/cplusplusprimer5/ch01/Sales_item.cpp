#include <iostream>
#include "Sales_item.hpp"

Sales_item::Sales_item(
    std::string isbn,
    float perPrice,
    int nums
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

Sales_item& Sales_item::operator=(const Sales_item& src)
{
    if (*this == src)
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
}