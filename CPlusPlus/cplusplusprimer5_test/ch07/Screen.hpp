#ifndef _SCREEN_H_
#define _SCREEN_H_

#include <string>
#include <ostream>
//#include "Window_mgr.hpp", not needed because Screen don't visit Window_mgr member

class Screen
{
public:
typedef std::string::size_type pos;
//using pos = std::string::size_type;
//typedef std::string::size_type pos;
//using ScreenIndex = std::vector<Screen>::size_type;    
//friend void Window_mgr::clear(ScreenIndex);

using pos = std::string::size_type;
friend class Window_mgr;//friend class


Screen() = default;
Screen(pos ht, pos wd, char c) :
    height(ht),
    width(wd),
    contents(ht*wd, c),
    access_cnt(0)
    {}

char get() const
{
    return contents[curpos];
}

inline char get(pos ht, pos wd) const;

Screen & move(pos s, pos d);

size_t getMember() const;


private:
Screen& set(char);
Screen& set(pos, pos, char);

Screen& display(std::ostream& os);
const Screen& dispaly(std::ostream& os) const;
void do_display(std::ostream& os) const
    { os << contents; os << '\n';}

pos curpos = 0;
pos height = 0;
pos width = 0;
std::string contents;
mutable size_t access_cnt;

};
};

/*class Link_screen
{
    Screen screen;
    Link_screen* pPre;
    Link_screen* pNext;
};*/

#endif
