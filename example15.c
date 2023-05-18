#include <stdio.h>

int main(){
    int var=200;
{
    var = 100; 
    printf("%d auto variable\n", var);
}
    printf("%d out block\n", var);
}
