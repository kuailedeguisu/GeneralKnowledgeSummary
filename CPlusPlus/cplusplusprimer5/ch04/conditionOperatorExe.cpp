#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::cin;

int main()
{
    unsigned int grade;

    cin >> grade;

    string str = grade > 90 ? "Well done!": grade < 60 ? "Failed" : "Good!";

    cout << str << endl;

    cout << ((grade < 60) ? "Failed" : "Passed") << endl;//Failed or Passed
    cout << (grade < 60) ? "Failed" : "Passed";//0 for Passed, 1 for Failed
    cout << endl;
    //cout << grade < 60 ? "Failed" : "Passed" << endl;

    return 0;
}
