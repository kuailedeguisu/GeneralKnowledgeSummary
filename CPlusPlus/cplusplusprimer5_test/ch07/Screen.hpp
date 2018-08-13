#include <string>

class Screen
{
public:
typedef std::string::size_type pos;
//using pos = std::string::size_type;

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
pos curpos = 0;
pos height = 0;
pos width = 0;
std::string contents;
mutable size_t access_cnt;

};