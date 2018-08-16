#ifndef _BAR_H_
#define _BAR_H_

class Bar
{
public:
private:
    static Bar mem1;//static supports uncomplete type
    Bar* mem2;//pointer supports uncomplete type
    Bar mem3;//data member not supports uncomplete type
};

#endif