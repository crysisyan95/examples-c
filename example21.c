#include <stdio.h>

void  printNumber()
{
    int n = 1;
    
    label:
        printf("%d ", n);
        n++;
        if(n <= 10 ) {
            goto label;
        }
}

int main(){
    printNumber();
    return 0;
}