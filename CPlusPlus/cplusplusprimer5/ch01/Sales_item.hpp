#ifndef SALESITEM_H
#define SALESITEM_H

#include <iostream>
#include <string>

class Sales_item
{
//friend functions are not member functions, so when you define them, you needn't add classname::
friend std::istream& operator>>(std::istream&, Sales_item&);
friend std::ostream& operator<<(std::ostream&, Sales_item&);
friend bool operator<(const Sales_item&, const Sales_item&);
friend bool operator==(const Sales_item&, const Sales_item&);

public:
    Sales_item() :
        units_sold(0),
        revenue(0.0)
       {}
    Sales_item(const std::string& book) :
        bookNo(book),
        units_sold(0),
        revenue(0.0)
        {}

    //Sales_item(std::istream& is) { is >> *this;}

    /*Sales_item(const Sales_item& src);
    bool operator==(const Sales_item& );
    Sales_item& operator=(const Sales_item& src);
    ~Sales_item();

    std::string getBookNo() const;
    void setBookNo(std::string bookNo);

    int getUnits_sold() const;
    void setUnits_sold(int Units_sold);
    
    void setRevenue(float Revenue);
    float getRevenue() const;
    Sales_item& operator+(const Sales_item& item1, const Sales_item& item2);*/

    Sales_item& operator+=(const Sales_item&);
    std::string isbn() const { return bookNo; }
    double avg_price() const;

    std::string getIsbn() const;
    unsigned getUnitsSold() const;
    double getRevenue() const;

private:
    std::string bookNo;
    unsigned units_sold;
    double revenue;
};

#endif