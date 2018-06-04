#include <iostream>
using namespace std;

class Super
{
	public:
		Super(){};
		virtual void f(){cout<<"Super()"<<endl;}
		virtual void f(int i){cout<<"Super(i)"<<endl;}
		
};
class Sub : public Super
{
	public:
		Sub(){};
		using Super::f;
		virtual f(){cout<<"Sub()"<<endl;}
		
};