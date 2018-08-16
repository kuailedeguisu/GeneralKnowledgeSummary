#include <string>
#include <iostream>
#include "Window_mgr.hpp"

using std::cout;
using std::endl;

void Window_mgr::clear(ScreenIndex i)
{
    Screen& s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
    cout << s.contents << endl;
}

Window_mgr::ScreenIndex Window_mgr::addScreen(const Screen& s)
{
    screens.push_back(s);
    return screens.size() - 1;
}

void Window_mgr::display() const
{
    for (auto& sr : screens)
    {
        cout << sr.contents << " ";
    }
    cout << endl;
}

int main()
{
    Window_mgr mgr;
    mgr.clear(0);

    mgr.addScreen(Screen(1, 1,'x'));
    mgr.addScreen(Screen(2, 2, 'y'));
    mgr.addScreen(Screen(3, 3, 'z'));
    mgr.addScreen(Screen(4, 4, 'm'));

    mgr.display();

    mgr.clear(2);
    mgr.display();


    return 0;
}