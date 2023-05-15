#include<stdio.h>
#define LIMIT  100

int main()
{
	printf("%d\n\r", LIMIT);

#undef 	LIMIT
	int LIMIT =  1001;
	printf("%d\n\r",LIMIT);


	return 0;

}
