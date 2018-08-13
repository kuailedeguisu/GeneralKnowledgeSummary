#include <string>
#include <ostream>
#include <istream>
class Sales_data
{
friend Sales_data add(const Sales_data&, const Sales_data&);
friend std::ostream& print(std::ostream&, const Sales_data&);
friend std::istream& read(std::istream&, Sales_data&);

public:
/*Sales_data(const std::string& isbn,
    const unsigned units_sold,
    const double revenue);
Sales_data& Sales_data(const Sales_data&);
Sales_data& operator=(const Sales_data&);*/

Sales_data() = default;
Sales_data(const std::string& bookNo) :
    bookNo(bookNo)
    {}
Sales_data(const std::string& bookNo,
    unsigned units_sold,
    double p) :
    bookNo(bookNo),
    units_sold(units_sold),
    revenue(units_sold * p)
    {}

Sales_data(std::istream&);

std::string isbn() const 
{
    return bookNo;
}

unsigned getSold() const 
{
    return units_sold;
}

double getRevenue() const 
{
    return units_sold;
}

Sales_data& combine(const Sales_data&);


private:
double avg_price() const;

std::string bookNo;
unsigned units_sold = 0;
double revenue = 0.0;
};


