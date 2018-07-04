#include <iostream>

shared_ptr<SpreadsheetCell> myCell(new SpreadsheetCell());
myCell->setValue(3.7);
cout << myCell.getValue() << "," << myCell.getString() << endl;


SpreadsheetCell *myCell = new SpreadsheetCell();
myCell->setValue(3.7);
cout << myCell.getValue() << "," << myCell.getString() << endl;
delete myCell;
myCell = nullptr;

SpreadsheetCell(const SpreadsheetCell& src);