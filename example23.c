#include <stdio.h>

void stativalue() {
    static int a=0;
    printf("%d\n",a);
    a++;
}


int main(){
    stativalue();
    stativalue();
    stativalue();
}



