#include "Screen.hpp"
#include <iostream>
using std::cout;
using std::endl;

inline char Screen::get(pos ht, pos wd) const
{
    pos row = ht * width;
    return contents[row + wd];
}

Screen& Screen::move(pos s, pos d)
{
    pos row = s * width;
    curpos = row + d;
    return *this;
}

size_t Screen::getMember() const
{
    access_cnt++;
}

Screen& Screen::set(char ch)
{
    contents[curpos] = ch;

    return *this;
}

Screen& Screen::set(pos row, pos col, char ch)
{
    contents[row*width + col] = ch;

    return *this;
}

Screen& Screen::display(std::ostream& os)
{
    do_display(os);

    return *this;
}

const Screen& Screen::dispaly(std::ostream& os) const
{
    do_display(os);

    return *this;
}

void Window_mgr::clear(ScreenIndex i)
{
    Screen& s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
    cout << s.contents << endl;
}

int  main()
{
    Screen sr;

    cout << sr.getMember() << endl;
    cout << sr.getMember() << endl;

    sr.move(4,0).set('#').display(cout);
    
    sr.set('*').display(cout);

    Screen myScr(5,3, '%');
    myScr.set('x').display(cout);

    const Screen black(4,4,'a');
    black.dispaly(cout);

    return 0;
}
