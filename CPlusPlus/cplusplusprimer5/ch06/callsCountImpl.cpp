#include "Chapter06.hpp"

unsigned int calls_count()
{
    static unsigned int cnt = 0;
    return ++cnt;
}