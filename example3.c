#include <stdio.h>
#define  merge(a, b)  a##b

int  main() {
	printf("%d\n\r", merge(12,34));
	return 0;
}
