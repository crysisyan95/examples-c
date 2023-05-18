#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
};

int main() {
    struct Book book1;

    strcpy(book1.title, "C++ Programing");
    strcpy(book1.author, "Bjarne Strounstrup");


    printf("Book 1 title : %s\n",book1.title);
    printf("Book 1 author : %s\n",book1.author);
    
    return 0;

}