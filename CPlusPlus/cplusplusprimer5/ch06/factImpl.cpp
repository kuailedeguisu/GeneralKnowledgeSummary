#include "Chapter06.hpp"

unsigned long computeFact(unsigned int val)
{
    unsigned long  ret = 1;

    while (val > 1)
    {
        ret *= val--;
    }

    return ret;
}

