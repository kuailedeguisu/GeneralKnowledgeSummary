#include "PersonInfo.hpp"
#include <sstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

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

    for (auto& person : people)
    {
        ostringstream out;
        out << person.name << " ";

        for (auto& no : person.phoneNos)
        {
            out << no << " ";
        }

        out << "\n";
    }

    cout << endl;

    return 0;
}