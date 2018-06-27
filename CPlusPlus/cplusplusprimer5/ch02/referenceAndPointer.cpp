#include <iostream>

int main()
{
    //reference
    double dVal = 3.14;
    double& ref = dVal;
    
    std::cout << dVal << std::endl;//3.14
    std::cout << ref << std::endl;//3.14

    ref = 88;
    std::cout << dVal << std::endl;//88
    std::cout << ref << std::endl;//88

    //pointer
    int var = 42;
    int *ptr = &var;
    int *ptr2 = ptr;//ptr2 is the same as ptr with the same address and the value pointed to

    std::cout << *ptr << std::endl;//42
    std::cout << *ptr2 << std::endl;//42
    std::cout << ptr << std::endl;//0x7fff2f9ae004
    std::cout << ptr2 << std::endl;//0x7fff2f9ae004

    *ptr = 99;//var = 99;
    *ptr2 = 100;//var = 100;
    std::cout << *ptr << std::endl;//100
    std::cout << *ptr2 << std::endl;//100
    std::cout << ptr << std::endl;//0x7fff2f9ae004, the same as the formal address
    std::cout << ptr2 << std::endl;//0x7fff2f9ae004

    /*int *p1 = NULL;
    int *p2 = 0;
    int *p3 = nullptr;

    std::cout << *p1 << std::endl;//segment fault(core dump)
    std::cout << *p2 << std::endl;
    std::cout << *p3 << std::endl;*/

    int iVal = 1024;
    int *pInt = &iVal;
    int **ppInt = &pInt;

    std::cout << *pInt << std::endl;//1024
    std::cout << **ppInt << std::endl;//1024
    std::cout << *ppInt << std::endl;//0x7ffd9c75a724
    std::cout << pInt << std::endl;//0x7fffd9c75a724, the same as the *ppInt
    std::cout << ppInt << std::endl;//0x7ffd9c75a730

    int iVal1 = 10;
    int *p1 = &iVal1;
    int *&r = p1;//from right to left, reference to a int type of pointer
    std::cout << iVal1 << std::endl;//10
    std::cout << *p1 << std::endl;//10
    std::cout << *r << std::endl;//10
    std::cout << p1 << std::endl;
    std::cout << r << std::endl;

    *r = 90;
    std::cout << iVal1 << std::endl;//90
    std::cout << *p1 << std::endl;//90
    std::cout << *r << std::endl;//90
    std::cout << p1 << std::endl;
    std::cout << r << std::endl;


    typedef char *pString;//pString is a pointer to char type object
    char str = 'A';
    const pString ctr = &str;//ctr is a const pointer to char type object
    const pString *ps = &ctr;//ps is a pointer to const pointer(to char type object) 

    std::cout << *ctr << std::endl;
    std::cout << **ps << std::endl;


    return 0;
}