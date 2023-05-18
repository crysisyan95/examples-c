#include <stdio.h>

int main(void) {
	// printf("Hello friends\v");
	// printf("Welcome to GFG");
	// printf("Hello Geeks \r ends");

	// char* s = "A\072\065";
	// printf("%s", s);
	char* s = "B\xfe\n";
	printf("%s", s);
	return 0;
}