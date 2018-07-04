#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string rsp;
    cout << "Please enter some string starting with '-' or '+'";
    while(cin >> rsp && !rsp.empty())
    {
        switch(rsp[0])
        {
            case '-':
                for (auto iter = rsp.begin() + 1; iter != rsp.end(); ++iter)
                {
                    if (*iter == ' ')
                    {
                        cout << "You have met one empty char." << endl;
                        break;
                    }
                }
                break;
            case '+':
                cout << "The first is +" << endl;
                break;
            default:
                break;
        }
    }

    cout << rsp << endl;
    
    return 0;
}