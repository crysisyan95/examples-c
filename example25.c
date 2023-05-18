#include <stdio.h>

union student {
    int age;
    char mark;
} s;

int main () {
    s.age = 0;
    s.mark = 89;

    printf("age = %d", s.age);
    printf("\nmarks = %d\n", s.mark);

    return 0;
}
