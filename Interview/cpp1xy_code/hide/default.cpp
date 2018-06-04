#include "default.h"

int main(int argc,char *argv[])
{
	Sub mySub;
	
	Super mySuper;
	
	Super& refsuper = mySub;
	
	mySuper.f();//Super 2
	
	mySub.f();//Sub 7
	
	refsuper.f();//Sub 2???
	


	return 0;
	
}