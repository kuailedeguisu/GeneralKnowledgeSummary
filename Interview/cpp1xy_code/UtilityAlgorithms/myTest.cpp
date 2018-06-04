#include "myTest.hpp"

SpreadsheetCell::SpreadsheetCell() : mValue(0), mString("")
{

}

SpreadsheetCell::SpreadsheetCell(const SpreadsheetCell& src)
{
    this->mValue = src.mValue;
    this->mString = src.mString;
}

SpreadsheetCell::SpreadsheetCell(const SpreadsheetCell&& src)
{

}
SpreadsheetCell& SpreadsheetCell::operator=(const SpreadsheetCell& rhs)
{
    if (this == &rhs)
        return *this;

    this->mValue = rhs.mValue;
    this->mString = rhs.mString;

    return *this;
}
SpreadsheetCell& SpreadsheetCell::operator=(const SpreadsheetCell&& rhs)
{

}
void SpreadsheetCell::setValue(const double& initialValue)
{
    mValue = initialValue;
    mString = doubleToString(mValue);
}

void SpreadsheetCell::setString(const string& initialString)
{
    mValue = stringToDouble(initialString);
    mString = initialString;
}

double SpreadsheetCell::getValue() const
{
    return mValue;
}

string SpreadsheetCell::getString() const
{
    return mString;
}

~SpreadsheetCell::SpreadsheetCell()
{

}

string SpreadsheetCell::doubleToString(const double& initialValue)
{
    ostringstream osstr;
    osstr << initialValue;
    return osstr
}
double SpreadsheetCell::stringToDouble(const string& initialString)