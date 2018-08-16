#ifndef _WINDOW_MGR_H_
#define _WINDOW_MGR_H_

#include <vector>
#include "Screen.hpp"

class Window_mgr
{
public:
using ScreenIndex = std::vector<Screen>::size_type;
void clear(ScreenIndex);
ScreenIndex addScreen(const Screen&);

void display() const;

private:
    std::vector<Screen> screens{Screen(24, 80, ' ')};
};

//When we need visit class A's member, we need include A header file; if we only use forward declaration not visit A's member, we don't need include A header file
#endif


