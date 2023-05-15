#include <stdio.h>
#define  get(x) #x
int main() {
	printf("%s\n\r",get(false));
}
