#include <iostream>
#include <math.h>

using namespace std;

class Foo
{
public:
    void setValue(int x, int y);
    int getLeft() const;
    int getRight() const;
private:
    int left;
    int right;
};

void Foo::setValue(int x, int y)
{
    left = x;
    right = pow(y, 3);
}

int Foo::getLeft() const
{
    return left;
}

int Foo::getRight() const
{
    return right;
}

int main()
{
    Foo foo;
    foo.setValue(2,10);
    cout << "left:" << foo.getLeft() << endl;
    cout << "right:" << foo.getRight() << endl;
    return 0;
}