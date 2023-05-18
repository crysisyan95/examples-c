#include <stdio.h>
enum year{
 Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec    
};


enum State {
    Working = 1, Failed=0, Freezed = 0
};


enum day {
    Sunday, Monday, Tuesday,  Wednesday, Thursday, Friday,
    saturday    
};

int main() {
    int i;
    for(i=Jan; i<= Dec; i++){
        printf("%d\n", i); 
    }
    
    enum day d=Monday;
    printf("The day number store in %d", d);

    // printf("%d, %d, %d", Working, Failed, Freezed); 
    return 0;   
    
}