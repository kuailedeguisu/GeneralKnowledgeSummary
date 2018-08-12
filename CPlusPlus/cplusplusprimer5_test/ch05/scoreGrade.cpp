#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main()
{
    const vector<string> svec = {"F", "D", "C", "B", "A", "A++"};
    int grade;
    string result;

    cin >> grade;

    if (grade < 60)
        result = svec[0];
    else
    {
        result = svec[(grade - 50)/10];
    
        if (grade != 100)
        {
            if (grade % 10 > 7)
                result += "+";
            if (grade % 10 < 3)
                result += "-";
        }
    }
    
    cout << result << endl;

    return 0;
}