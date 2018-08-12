#include <string>
#include <ostream>
#include <istream>
class Sales_data
{
public:
/*Sales_data(const std::string& isbn,
    const unsigned units_sold,
    const double revenue);
Sales_data& Sales_data(const Sales_data&);
Sales_data& operator=(const Sales_data&);*/

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
double avg_price() const;

//private:
std::string bookNo;
unsigned units_sold;
double revenue;
};

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream& print(std::ostream&, const Sales_data&);
std::istream& read(std::istream&, Sales_data&);
