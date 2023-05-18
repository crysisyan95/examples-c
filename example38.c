#include <stdio.h>

struct str1 {
    int a: 16;
    char c;
};

struct str2 {
    int a: 24;
    char c;
};


int main() 
{
    printf("Size of str1: %d\nSize of str2: %d\n",(int)sizeof(struct str1), (int) sizeof(struct str2));
}