#include <iostream>
using namespace std;

class Super
{
	public:
		Super(){};
		virtual void f(int i=2){cout<<"Super(i)"<<i<<endl;}
		
};
class Sub : public Super
{
	public:
		Sub(){};
		virtual void f(int i=7){cout<<"Sub(i)"<<i<<endl;}
		
};