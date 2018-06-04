#include "hide.h"

int main(int argc,char *argv[])
{
	Super mySuper;
	Sub mySub;
	
	
	Super& refsuper = mySub;
	
	mySuper.f();//super
	mySub.f();//sub
	
	refsuper.f();//super
	
	
	//////////////////////
	
	mySuper.f(1);//super(i)
	//mySub.f(1);//error
	
	refsuper.f(1);//super(i)
	


	return 0;
	
}