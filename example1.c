#include <stdio.h>
#define INCREMENT(x) ++x
int main() {

    char* s= "Hola universo";   
    int x = 10;
    printf("string %s\n\r", INCREMENT(s));
    printf("number %d\n\r", INCREMENT(x));
    return 0;

}
