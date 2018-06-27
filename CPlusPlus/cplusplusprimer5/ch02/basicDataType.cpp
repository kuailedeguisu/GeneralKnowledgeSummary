#include <iostream>
#include <string>

int main()
{
    bool b = 42;
    std::cout << "b:" << b << std::endl;//1

    int i = b;
    std::cout << "i:" << i << std::endl;//1

    i = 3.14;
    double pi = i;
    std::cout << "pi:" << pi << std::endl;//3

    unsigned char c = -1;
    std::cout << "c:" << c << std::endl;//?

    signed char cc = 256;
    std::cout << "cc:" << cc << std::endl;//undefined

    unsigned u = 10;
    int a = -42;
    std::cout << "a+a:" << a + a << std::endl;//-84
    std::cout << "u+a:" << u + a << std::endl;//switch a into unsigned int, then result is 4294967264

    unsigned u1 = 42, u2 = 10;
    std::cout << "u1-u2:" << u1 -u2 << std::endl;//32
    std::cout << "u2-u1:" << u2 - u1 << std::endl;//4294967264

    for (int i = 10; i >= 0; --i)
        std::cout << i << std::endl;//10 9 8 .... 0
    
    unsigned num = 11;
    while (num > 0)
    {
        --num;
        std::cout << num << std::endl;
    }

    /*for (unsigned i = 10; i >= 0; --i)// dead loop because i is always not negative integer
        std::cout << i << std::endl; */

    int decNum = -42;
    std::cout << "decNum:" << decNum << std::endl;

    int octNum = 010;
    std::cout << "octNum:" << octNum << std::endl;

    int hexNum = 0x88;
    std::cout << "hexNum:" << hexNum << std::endl;

    char x = 'a';
    std::string str = "Hello World!";
    std::cout << "x:" << x << std::endl;
    std::cout << "str:" << str << std::endl;

    std::cout << "It is really a long and long string,"
        "it needs two lines to be printed." << std::endl;

    std::cout << "\t Hi, \x4dO\115!\n" << std::endl;

    std::cout << "\1234" << "\n";//S4
    std::cout << "\x1234" << "\n";//4

    std::cout << L'A' << "," << u8"hi!" << "," << 42ULL << "," << 1E-3F << "," << 3.1415926L << std::endl;

    int int1 = 0;
    int int2 = {0};
    int int3(0);
    int int4{0};

    std::cout << int1 << "," << int2 << "," << int3 << "," << int4 << std::endl;
    
    return 0; 
}