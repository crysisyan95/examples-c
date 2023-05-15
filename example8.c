#include <stdio.h>
#define VERBOSE 2 
int main ()
{
	#if VERBOSE >=  2
		printf("Trace Message");
	#endif
}
