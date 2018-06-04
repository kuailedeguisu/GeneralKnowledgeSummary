#include <iostream>
#include <string>
using namespace std;

class SpreadsheetCell
{
puplic:
    SpreadsheetCell();
    SpreadsheetCell(const SpreadsheetCell& src);
    SpreadsheetCell(const SpreadsheetCell&& src);
    SpreadsheetCell& operator=(const SpreadsheetCell& rhs);
    SpreadsheetCell& operator=(const SpreadsheetCell&& rhs);
    void setValue(const double& initialValue);
    void setString(const string& initialString);
    double getValue() const;
    string getString() const;
    ~SpreadsheetCell();
protected:
    string doubleToString(const double& initialValue);
    double stringToDouble(const string& initialString);
    double mValue;
    string mString;
};