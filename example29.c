#include <stdio.h>

int main() {
    
    int i = 2;
    register static int* a= &i;
    printf("%d\n", *a);
    getchar();

    return 0;
}