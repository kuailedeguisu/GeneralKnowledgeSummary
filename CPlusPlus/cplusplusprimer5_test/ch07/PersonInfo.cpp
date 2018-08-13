#include "PersonInfo.hpp"
#include <sstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isValid(const string& str)
{
    for (auto& ch : str)
    {
        if ((ch - '0' >= 0) && (ch - '0' <= 9))
        {
            continue;
        }
        else
        {
            return false;
        }
    }

    return true;
}

//I am not sure if the implementation is right
string format(const string& str)
{
    return str;
}

int main()
{
    vector<PersonInfo> people;

    string line, word;

    while (getline(cin, line))
    {
        PersonInfo info;

        istringstream record(line);
        record >> info.name;
    
        while (record >> word)
        {
            info.phoneNos.push_back(word);
        }

        people.push_back(info);
    }

    /*for (auto& person : people)
    {
        cout << person.name << " ";

        for (auto& no : person.phoneNos)
        {
            cout << no << " ";
        }

        cout << "\n";
    }
    cout << endl;*/
    for (const auto& entry : people)
    {
        ostringstream formatted, badNums;

        for (const auto& no : entry.phoneNos)
        {
            if (!isValid(no))
            {
                badNums << " " << no;
            }
            else
            {
                formatted << " " << format(no);
            }
        }

        if (badNums.str().empty())
        {
            cout << entry.name << " " << formatted.str() << endl;
        }
        else
        {
            cerr << "input error:" << entry.name << " With wrong phone numbers" << endl;
        }
    }

    return 0;
}