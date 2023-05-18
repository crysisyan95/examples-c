#include <stdio.h>

int main(void)
{
    int i = 10;
    int j = 20;

    printf("%p\n",&i);
    int*ptr=&i;
    printf("%p\n", ptr);
    ptr=&j;
    printf("%p\n", ptr);
    printf("%p\n", &j);
    
    printf("address of pointer %p\n", &ptr);

    printf("sizeof int is %d\n", (int) sizeof(j));

    int value = sizeof(j); 
    int* ptr0=&j; \
    printf("ptr0: pointer an value mutable %d\n", *ptr0);


    int const* ptr1=&j;
    const int* ptr2=&i;
    int* const ptr3=&i;
    const int const* ptr4=&j;


    return 0;


}