#include <stdio.h>

int initilizer(void) {
    return 50;
}

int main()
{
    static int i = 50;
    printf("value of i = %d", i);
    getchar();
    return 0;
}

