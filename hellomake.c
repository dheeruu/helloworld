#include "hellomake.h" 
#include <stdio.h>

int main() 
{
	int i=0;

	// call a function in another file
	myPrintHelloMake();

	for ( i=0; i < 10; i++ )
	{
		printf ("i = %d\n", i);
	}

	return(0);
}
