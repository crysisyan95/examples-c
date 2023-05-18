#include <stdio.h>

int main(int argc, char* argv[]) {

    int i = 1;
    
    switch (i)
    {   
        case 1:
            printf("case %d", i);
            break;
        case 2:
            printf("case %d", i);
            break;
        case 3:
            printf("case %d", i);
            break;
        case 4:
            printf("case %d", i);
            break;
        default:
            printf("default\n");
            break;
    }
}