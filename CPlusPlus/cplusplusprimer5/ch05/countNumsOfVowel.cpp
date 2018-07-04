#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    unsigned int aCnt = 0, iCnt = 0, oCnt = 0, eCnt = 0, uCnt = 0;
    unsigned int vowelCnt = 0;
    unsigned int otherCnt = 0;

    char ch;

    while(cin >> ch)
    {
        switch(ch)
        {
            /*case 'a':
                ++aCnt;
                break;
            case 'i':
                ++iCnt;
                break;
            case 'o':
                ++oCnt;
                break;
            case 'e':
                ++eCnt;
                break;
            case 'u':
                ++uCnt;
                break;*/
            /*case 'a':
            case 'i':
            case 'e':
            case 'o':
            case 'u':
                ++vowelCnt;
                break;*/
            case 'a':case 'i':case 'e':case 'o':case 'u':
                ++vowelCnt;
                break;
            default:
                ++otherCnt;
                break;
        }

    }

    /*cout << "The number of a is " << aCnt << endl;
    cout << "The number of i is " << iCnt << endl;
    cout << "The number of o is " << oCnt << endl;
    cout << "The number of e is " << eCnt << endl;
    cout << "The number of u is " << uCnt << endl;*/
    cout << "The number of vowel is " << vowelCnt << endl;
    cout << "The number of other char is " << otherCnt << endl;

    return 0;
}