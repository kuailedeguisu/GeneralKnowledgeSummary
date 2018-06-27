#ifndef SALES_DATA_H// avoid to include Sales_data.hpp repeatedly
#define SALES_DATA_H

#include <string>

struct Sales_data

{
    std::string bookNo;
    unsigned units_sold;
    double revenue;
};//the data structure has no any operation
#endif