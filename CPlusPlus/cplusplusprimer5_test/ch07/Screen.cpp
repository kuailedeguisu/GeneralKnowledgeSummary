#include "Screen.hpp"

inline char Screen::get(pos ht, pos wd) const
{
    pos row = ht * width;
    return contents[row + wd];
}

Screen & Screen::move(pos s, pos d)
{
    pos row = s * width;
    curpos = row + d;
    return *this;
}

size_t Screen::getMember() const
{
    access_cnt++;
}

int  main()
{
    Screen sr;
    sr.getMember();
    return 0;
}