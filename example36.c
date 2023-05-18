#include <stdio.h>

struct Point {
    int x, y;
};

int main() {
    struct Point str = { 1, 2};

    struct Point* ptr = &str;

    printf("%d, %d\n", ptr->x, str.x);
    printf("%d, %d\n", ptr->y, str.y);
    
    return 0;
}